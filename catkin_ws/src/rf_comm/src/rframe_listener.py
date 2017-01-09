#!/usr/bin/env python
import rospy
from std_msgs.msg import Int64


class SubscribeAndPublish:

    def __init__(self):        
        self.sub_ = rospy.Subscriber("number", Int64, self.callback)
        self.pub_ = rospy.Publisher('new_number', Int64, queue_size=10)

    def callback(self, data):
        n = data.data
        rospy.loginfo(rospy.get_caller_id() + " I heard %s", n)
        self.pub_.publish(2*n)
    

def run_node():
    rospy.init_node('rframe_lsitener')

    SAPObject = SubscribeAndPublish()

    rospy.spin()


if __name__ == '__main__':
    try:
        run_node()
    except rospy.ROSInterruptException:
         pass
