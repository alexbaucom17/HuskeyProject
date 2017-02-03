#include "color_detection.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "color_detection");
 
  ColorDetection cd;
  ros::spin();
  return 0;
}
