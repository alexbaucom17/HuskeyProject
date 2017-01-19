#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "nav_msgs/Odometry.h"
#include "tf/transform_broadcaster.h"

class SubscribeAndPublish
{
public:
  SubscribeAndPublish()
  {
    //Topic you want to publish
    odom_pub_ = n_.advertise<nav_msgs::Odometry>("/odom", 1);
    scan_pub_ = n_.advertise<sensor_msgs::LaserScan>("/scan", 1);

    //Topic you want to subscribe
    odom_sub_ = n_.subscribe("/rframe_odom", 1, &SubscribeAndPublish::odom_callback, this);
    scan_sub_ = n_.subscribe("/rframe_scan", 1, &SubscribeAndPublish::scan_callback, this);
  }

  void odom_callback(const nav_msgs::Odometry& msg)
  {
	//Add ros time to header (assuming low latency here from rframe)
	nav_msgs::Odometry new_msg = msg;
	new_msg.header.stamp = ros::Time::now(); 
    odom_pub_.publish(new_msg);

	//TODO add tf broadcaster

  }

  void scan_callback(const sensor_msgs::LaserScan& msg)
  {
	//Add ros time to header (assuming low latency here from rframe)
	sensor_msgs::LaserScan new_msg = msg;
	new_msg.header.stamp = ros::Time::now();
    scan_pub_.publish(new_msg);
  }

private:
  ros::NodeHandle n_; 
  ros::Publisher odom_pub_;
  ros::Subscriber odom_sub_;
  ros::Publisher scan_pub_;
  ros::Subscriber scan_sub_; 
  ros::Time current_time_;


};//End of class SubscribeAndPublish



int main(int argc, char **argv)
{
  //Initiate ROS
  ros::init(argc, argv, "sensor_bridge");

  //Create an object of class SubscribeAndPublish that will take care of everything
  SubscribeAndPublish SAPObject;

  ros::spin();

  return 0;
}
