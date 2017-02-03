#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <iterator>

#include "std_msgs/Float32.h"
#include "std_msgs/Bool.h"

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <ros/ros.h>

using namespace std;

class ColorDetection
{
  // ROS Stuff
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  ros::Publisher dist_pub, angle_pub, detected_pub;
  std_msgs::Float32 dist_msg, angle_msg;
  std_msgs::Bool detected_msg;

  // callback
  void imageCb(const sensor_msgs::ImageConstPtr& msg);

  // temporaries
  
  
public:
  ColorDetection();
   ~ColorDetection();

}; //class ColorDetection
