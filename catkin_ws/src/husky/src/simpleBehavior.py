#!/usr/bin/env python
import rospy 
import tf
import actionlib
import math
from move_base_msgs.msg import MoveBaseGoal, MoveBaseAction, MoveBaseResult
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped
from std_msgs.msg import Float32

#global vars
dist = 1 #barrel distance (m)
angle = 0 #barrel angle (rad)
tf_listener = None #initialize global name
barrel_global_old = None #initialize global name
desired_dist = 1 #stop 1 m in front of barrel
move_thresh = 1 #re-plan goal if barrel has moved more than this much


def angle_callback(data):
	angle = data.data
	rospy.loginfo("I got an angle")


def dist_callback(data):
	dist = data.data
	rospy.loginfo("I got a distance")


def find_barrel_location():
	#assumes robot is moving slow enough that pose, dist, and angle are all still accurate

	#build pose message to transform into map coordinates
	barrel_local = PoseStamped()
	barrel_local.header.frame_id = "base_link" #ideally should define camera link and use that
	barrel_local.header.stamp = rospy.get_rostime()
	barrel_local.pose.position.x = (dist-desired_dist)*math.sin(angle)
	barrel_local.pose.position.y = (dist-desired_dist)*math.cos(angle) #put desired dist here for easy goal sending later
	quaternion = tf.transformations.quaternion_from_euler(0,0,angle)
	barrel_local.pose.orientation.x = quaternion[0]
	barrel_local.pose.orientation.y = quaternion[1]
	barrel_local.pose.orientation.z = quaternion[2]
	barrel_local.pose.orientation.w = quaternion[3]

	#get barrel location in the map frame
	barrel_global = tf_listener.transformPose("/map", barrel_local)
	
	#figure out if the barrel has moved significantly
	dx = barrel_global.point.x - barrel_global_old.point.x
	dy = barrel_global.point.y - barrel_global_old.point.y
	barrel_global_old = barrel_global

	#send a new goal if the barrel has moved
	if math.sqrt(dx**2 + dy**2) > move_thresh:
		return barrel_global
	else:
		return None 
	

#run main behavior code
def run_node():
	rospy.init_node('huskyBehvaior')
	distSub = rospy.Subscriber("distance",Float32,dist_callback)
	angleSub = rospy.Subscriber("angle",Float32,angle_callback)
	tf_listener = tf.TransformListener()
	mb_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
	mb_client.wait_for_server() 
	r = rospy.Rate(1.0)

	while not rospy.is_shutdown():	

		#check if we can see the barrel
		if not dist == -1:

			#get desired pose and send goal if the barrel has moved
			desired_pose = find_barrel_location()
			if desired_pose:

				#Create goal message
				actionGoal = MoveBaseGoal()
				actionGoal.target_pose = desired_pose
				actionGoal.target_pose.header.stamp = rospy.get_rostime()

				#send goal - each time through this loop the newest goal will preempt the old one
				mb_client.send_goal(actionGoal)
				rospy.loginfo("Goal sent")

		#just sleep if there is nothing else to do
		r.sleep()

#execute main code
if __name__=='__main__':
    try:
	run_node()
    except rospy.ROSInterruptException:
	pass
