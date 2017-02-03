#include "color_detection.h"
#include <sstream>
#include <iostream>

using namespace cv;
using namespace std;
RNG rng(12345);

ColorDetection::ColorDetection()
   : it_(nh_)
{
    // Subscribe
    image_sub_ = it_.subscribe("/AdonisRos/image", 1, 
      &ColorDetection::imageCb, this);
    // Publish Distance Data
    dist_pub = nh_.advertise<std_msgs::Float32>("distance", 100);
    angle_pub = nh_.advertise<std_msgs::Float32>("angle", 100);
    namedWindow("Raw Frame");
  }

ColorDetection::~ColorDetection()
  {
    image_sub_.shutdown();
    destroyAllWindows();
  }

void ColorDetection::imageCb(const sensor_msgs::ImageConstPtr& msg)
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
   int H_min = 166;
   int H_max = 179;
   int S_min = 101;
   int S_max = 255;
   int V_min = 40;
   int V_max = 255;

   Mat img_color = cv_ptr->image;
   Mat img_hsv;
   cvtColor(img_color,img_hsv,COLOR_BGR2HSV);
   Mat img_thresholded;
   inRange(img_hsv,Scalar(H_min, S_min, V_min),Scalar(H_max, S_max, V_max),img_thresholded);
    //morphological opening (remove small objects from the foreground)
   erode(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
   dilate(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 

   //morphological closing (fill small holes in the foreground)
   dilate( img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
   erode(img_thresholded, img_thresholded, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
   
   
   //Draw the center of the barrel
   Moments oMoments = moments(img_thresholded);
   double dM01 = oMoments.m01;
   double dM10 = oMoments.m10;
   double dArea = oMoments.m00;

   // if the area <= 10000, I consider that the there are no object in the image and it's because of the noise, the area is not zero 

   //calculate the position of the ball
   int posX = dM10 / dArea;
   int posY = dM01 / dArea;        
   circle(img_thresholded,Point(posX, posY),5,CV_RGB(255,0,0)); 
   

   imshow("raw image", img_color);
   imshow("mask_image", img_thresholded);

   
   //Calculate contours and boundingbox
   vector<vector<Point> > contours;
   vector<Vec4i> hierarchy;
   findContours(img_thresholded,contours,hierarchy,CV_RETR_TREE,CV_CHAIN_APPROX_SIMPLE,Point(0,0));

   vector<vector<Point> > contours_poly( contours.size() );
   vector<Rect> boundRect( contours.size() ); 
    for( int i = 0; i < contours.size(); i++ )
     { approxPolyDP( Mat(contours[i]), contours_poly[i], 3, true );
       boundRect[i] = boundingRect( Mat(contours_poly[i]) );
     }


  /// Draw polygonal contour + bonding rects + circles
  Mat drawing = Mat::zeros( img_thresholded.size(), CV_8UC3 );
  for( int i = 0; i< contours.size(); i++ )
     {
       Scalar color = Scalar( rng.uniform(0, 255), rng.uniform(0,255), rng.uniform(0,255) );
       drawContours( drawing, contours_poly, i, color, 1, 8, vector<Vec4i>(), 0, Point() );
       rectangle( drawing, boundRect[i].tl(), boundRect[i].br(), color, 2, 8, 0 );
     }

  /// Show in a window
  namedWindow( "Contours", CV_WINDOW_AUTOSIZE );
  imshow( "Contours", drawing );

  // Mat color_pixels;
  // findNonZero(img_thresholded, color_pixels)
  // Rect Min_Rect = boundingRect(color_pixels);
  // rectangle(img_thresholded,
   
//    if (cv_ptr->image.rows > 60 && cv_ptr->image.cols > 60)
  //    cv::circle(cv_ptr->image, cv::Point(50, 50), 10, CV_RGB(255,0,0));

    // Update GUI Window
       waitKey(3);
    



    float distance = 1.1;
    float angle = 0.3;
    //publisher
    dist_msg.data = distance;
    angle_msg.data = angle;
    dist_pub.publish(dist_msg);
    angle_pub.publish(angle_msg);
    // Output modified video stream
   // image_pub_.publish(cv_ptr->toImageMsg());
  }

