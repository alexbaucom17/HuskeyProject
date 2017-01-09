#!/usr/bin/env python
import rospy 
import tf
import actionlib
from nav_msgs.msg import OccupancyGrid
from move_base_msgs.msg import MoveBaseGoal, MoveBaseAction, MoveBaseResult
from geometry_msgs.msg import PoseWithCovarianceStamped

def map_callback(data):
	#do something here
	rospy.loginfo("I got a map")

def pose_callback(data):
	#do something
	rospy.loginfo("I got a pose")


#run main behavior code
def run_node():
	rospy.init_node('huskyBehvaior')
	mapSub = rospy.Subscriber("map",OccupancyGrid,map_callback)
	poseSub = rospy.Subscriber("amcl_pose",PoseWithCovarianceStamped,pose_callback)
	mb_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
	mb_client.wait_for_server() 

	while not rospy.is_shutdown():

		#Create goal
		actionGoal = MoveBaseGoal()
		actionGoal.target_pose.header.frame_id = "base_link"
		actionGoal.target_pose.header.stamp = rospy.get_rostime()
		
		#Set actual goal cordinates here based on map, location, camera, etc. Might consider subscribing to costmaps as well

		actionGoal.target_pose.pose.position.x = 4.0;
		actionGoal.target_pose.pose.orientation.w = 1.0;

		mb_client.send_goal(actionGoal)
		mb_client.wait_for_result()

		rospy.loginfo("Behavior is alive")




#execute main code
if __name__=='__main__':
    try:
	run_node()
    except rospy.ROSInterruptException:
	pass
