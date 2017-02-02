#include <ros/ros.h>
#include "std_msgs/Float32.h"
#include <sstream>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

static const std::string OPENCV_WINDOW = "Image window";

class ImageConverter
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  image_transport::Publisher image_pub_;
  ros::Publisher dist_pub;
  std_msgs::Float32 dist_msg;  

public:
  ImageConverter()
    : it_(nh_)
  {
    // Subscrive to input video feed and publish output video feed
    image_sub_ = it_.subscribe("/AdonisRos/image", 1, 
      &ImageConverter::imageCb, this);
    image_pub_ = it_.advertise("/image_converter/output_video", 1);
    dist_pub = nh_.advertise<std_msgs::Float32>("distance", 100);

    namedWindow(OPENCV_WINDOW);
  }

  ~ImageConverter()
  {
    destroyWindow(OPENCV_WINDOW);
  }

  void imageCb(const sensor_msgs::ImageConstPtr& msg)
  {
    cv_bridge::CvImagePtr cv_ptr;
    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception: %s", e.what());
      return;
    }


   /*******************DETECTION CODE***********************/
   Mat img_color = cv_ptr->image;
   Mat img_hsv;
   cvtColor(img_color,img_hsv,COLOR_BGR2HSV);
   Mat img_thresholded;
   inRange(img_hsv,Scalar(166,101,40),Scalar(179,255,255),img_thresholded);
    //morphological opening (remove small objects from the foreground)
   erode(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
   dilate(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 

   //morphological closing (fill small holes in the foreground)
   dilate( img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
   erode(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );

//    if (cv_ptr->image.rows > 60 && cv_ptr->image.cols > 60)
  //    cv::circle(cv_ptr->image, cv::Point(50, 50), 10, CV_RGB(255,0,0));

    // Update GUI Window
    imshow("raw image", img_color);
    imshow(OPENCV_WINDOW, img_thresholded);
    waitKey(3);
    float distance = 1.1;
    

    //publisher
    dist_msg.data = distance;
    dist_pub.publish(dist_msg);
    // Output modified video stream
    image_pub_.publish(cv_ptr->toImageMsg());
  }
};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_converter");
  ImageConverter ic;
  ros::spin();
  return 0;
}
