#!/usr/bin/env python
import rospy 
import tf
import actionlib
from nav_msgs.msg import OccupancyGrid
from move_base_msgs.msg import MoveBaseGoal, MoveBaseAction, MoveBaseResult

def map_callback(data):
	#do something here
	pass


#run main behavior code
def run_node():
	rospy.init_node('huskyBehvaior')
	mapSub = rospy.Subscirber("map",OccupancyGrid,map_callback)
	tfListener = tf.TransformListener()
	mb_client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
	mb_client.wait_for_server() 

	while not rospy.is_shutdown():

		#get current location in map coordinates
		(trans,rot) = tfListener.lookupTransform('/map', '/odom', rospy.Time(0))
		#Create goal
		actionGoal = MoveBaseGoal()
		actionGoal.target_pose.header.frame_id = "map"
		actionGoal.target_pose.header.stamp = rospy.get_rostime()
		
		#Set actual goal cordinates here based on map, location, camera, etc. Might consider subscribing to costmaps as well

		mb_client.send_goal(actionGoal)
		mb_client.wait_for_result()

		rospy.spin()




#execute main code
if __name__=='__main__':
    try:
	run_node()
    except rospy.ROSInterruptException:
	pass
