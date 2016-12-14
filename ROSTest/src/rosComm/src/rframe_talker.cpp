#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Int64.h"

#include <sstream>

class SubscribeAndPublish
{
public:
  SubscribeAndPublish()
  {
    //Topic you want to publish
    pub_ = n_.advertise<std_msgs::String>("/chatter", 1);

    //Topic you want to subscribe
    sub_ = n_.subscribe("/new_number", 1, &SubscribeAndPublish::callback, this);
  }

  void callback(const std_msgs::Int64& input)
  {
    
    std_msgs::String msg;
    std::stringstream ss;
    ss << "hello world " << input.data;
    msg.data = ss.str();

    ROS_INFO("%s", msg.data.c_str());
    pub_.publish(msg);
  }

private:
  ros::NodeHandle n_; 
  ros::Publisher pub_;
  ros::Subscriber sub_;

};//End of class SubscribeAndPublish



int main(int argc, char **argv)
{
  //Initiate ROS
  ros::init(argc, argv, "subscribe_and_publish");

  //Create an object of class SubscribeAndPublish that will take care of everything
  SubscribeAndPublish SAPObject;

  ros::spin();

  return 0;
}
