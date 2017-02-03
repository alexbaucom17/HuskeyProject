#!/usr/bin/env python
import rospy 
import tf
import actionlib
from move_base_msgs.msg import MoveBaseGoal, MoveBaseAction, MoveBaseResult
from geometry_msgs.msg import PoseWithCovarianceStamped
from std_msgs.msg import float32

dist = 1
angle = 0

def angle_callback(data):
	angle = data.data
	rospy.loginfo("I got an angle")


def dist_callback(data):
	dist = data.data
	rospy.loginfo("I got a distance")


def pose_callback(data):
	#do something
	rospy.loginfo("I got a pose")


#run main behavior code
def run_node():
	rospy.init_node('huskyBehvaior')
	poseSub = rospy.Subscriber("amcl_pose",PoseWithCovarianceStamped,pose_callback)
	distSub = rospy.Subscriber("distance",float32,dist_callback)
	angleSub = rospy.Subscriber("angle",float32,angle_callback)
	mb_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
	mb_client.wait_for_server() 
	r = rospy.rate(1.0)

	while not rospy.is_shutdown():	

		#do processing to deterine goal x and yaw
		x = dist - 1.0 # stay 1 m away from object
		yaw = angle # want to get barrel in front of camera

		#Create goal message
		actionGoal = MoveBaseGoal()
		actionGoal.target_pose.header.frame_id = "base_link"
		actionGoal.target_pose.header.stamp = rospy.get_rostime()
		actionGoal.target_pose.pose.position.x = x;
		quaternion = tf.transformations.quaternion_from_euler(0,0,yaw)
		actionGoal.target_pose.pose.orientation.x = quaternion[0]
		actionGoal.target_pose.pose.orientation.y = quaternion[1]
		actionGoal.target_pose.pose.orientation.z = quaternion[2]
		actionGoal.target_pose.pose.orientation.w = quaternion[3]

		#send goal - each time through this loop the newest goal will preempt the old one
		mb_client.send_goal(actionGoal)

		rospy.loginfo("Goal sent")
		r.sleep()

#execute main code
if __name__=='__main__':
    try:
	run_node()
    except rospy.ROSInterruptException:
	pass
