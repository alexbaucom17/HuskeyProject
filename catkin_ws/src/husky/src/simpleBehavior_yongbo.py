#!/usr/bin/env python
import rospy 
import tf
import actionlib
import math
from move_base_msgs.msg import MoveBaseGoal, MoveBaseAction, MoveBaseResult
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped
from std_msgs.msg import Float32, Bool

#global vars
class husky_behavior_node():
  
   def __init__(self):
        
        rospy.init_node('huskyBehvaior')
        rospy.Subscriber("distance",Float32,self.dist_callback)
        rospy.Subscriber("angle",Float32,self.angle_callback)
        rospy.Subscriber("detected",Bool,self.detected_callback)
        self.tf_listener = tf.TransformListener()
        self.mb_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
        self.mb_client.wait_for_server()
        r = rospy.Rate(1.0)
      
        # Initialize variables
        self.dist = 1 #barrel distance (m)
        self.angle = 0 #barrel angle (rad)
        #self.tf_listener = None #initialize global name
        self.barrel_global_old = None #initialize global name
        self.desired_dist = 1 #stop 1 m in front of barrel
        self.move_thresh = 1 #re-plan goal if barrel has moved more than this much
        self.circle_div = 10 #break circle into this many parts
        self.barrel_detected = False
        
        while not rospy.is_shutdown():
                  self.run_node() 
                  r.sleep()


   def detected_callback(self, data):
        self.barrel_detected = data.data

   def angle_callback(self, data):
        self.angle = data.data
        rospy.loginfo("I got an angle")

   def dist_callback(self, data):
	self.dist = data.data
	rospy.loginfo("I got a distance")


   def find_barrel_location(self):
	#assumes robot is moving slow enough that pose, dist, and angle are all still accurate

	#build pose message to transform into map coordinates
	barrel_local = PoseStamped()
	barrel_local.header.frame_id = "base_link" #ideally should define camera link and use that
	barrel_local.header.stamp = rospy.get_rostime()
	barrel_local.pose.position.x = (self.dist-self.desired_dist)*math.sin(self.angle)
	barrel_local.pose.position.y = (self.dist-self.desired_dist)*math.cos(self.angle) #put desired dist here for easy goal sending later
	quaternion = tf.transformations.quaternion_from_euler(0,0,self.angle)
	barrel_local.pose.orientation.x = quaternion[0]
	barrel_local.pose.orientation.y = quaternion[1]
	barrel_local.pose.orientation.z = quaternion[2]
	barrel_local.pose.orientation.w = quaternion[3]

	#get barrel location in the map frame
	barrel_global = self.tf_listener.transformPose("/map", barrel_local)
	
	#figure out if the barrel has moved significantly
	dx = barrel_global.point.x - self.barrel_global_old.point.x
	dy = barrel_global.point.y - self.barrel_global_old.point.y
	self.barrel_global_old = barrel_global

	#send a new goal if the barrel has moved
	if math.sqrt(dx**2 + dy**2) > self.move_thresh:
		return barrel_global
	else:
		return None 
	

#run main behavior code
   def run_node(self):
        #print(self.barrel_detected)
        #print(self.dist)	
        #check if we can see the barrel
        
	if self.barrel_detected:

	#get desired pose and send goal if the barrel has moved
		desired_pose = self.find_barrel_location()
		if desired_pose:

			#Create goal message
			actionGoal = MoveBaseGoal()
			actionGoal.target_pose = desired_pose
			actionGoal.target_pose.header.stamp = rospy.get_rostime()

			#send goal
			self.mb_client.send_goal(actionGoal)
			rospy.loginfo("Goal sent [Barrel]")
		else:
	              		#spin in a circle if the barrel isn't detected
			actionGoal = MoveBaseGoal()
			actionGoal.target_pose.header.stamp = rospy.get_rostime()
			actionGoal.target_pose.header.frame_id = "base_link"
			quaternion = tf.transformations.quaternion_from_euler(0,0,2*math.pi/self.circle_div)
			actionGoal.target_pose.pose.orientation.x = quaternion[0]
			actionGoal.target_pose.pose.orientation.y = quaternion[1]
			actionGoal.target_pose.pose.orientation.z = quaternion[2]
			actionGoal.target_pose.pose.orientation.w = quaternion[3]
			self.mb_client.send_goal(actionGoal)
			rospy.loginfo("Goal sent [Circle]")
	  		

   
                

#execute main code
if __name__=='__main__':
    try:
#	run_node()
        my_node = husky_behavior_node()
    except rospy.ROSInterruptException:
	pass
