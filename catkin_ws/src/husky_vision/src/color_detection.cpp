#include "color_detection.h"
#include <sstream>
#include <iostream>
//#include <algorithm>
//#include <iterator>

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
    detected_pub = nh_.advertise<std_msgs::Bool>("detected",100);
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
   int H_min = 168;;// = 166;
   int H_max = 179; //= 179;
   int S_min;// = 101;
   int S_max = 255;
   int V_min = 80; //40
   int V_max = 255;
   
   namedWindow("Control", CV_WINDOW_AUTOSIZE);
   //cvCreateTrackbar("LowH","Control",&H_min,179);
   //cvCreateTrackbar("HighH","Control",&H_max,179);
   cvCreateTrackbar("LowS","Control",&S_min,255);
   //cvCreateTrackbar("HighS","Control",&S_max,255);
   //cvCreateTrackbar("LowV","Control",&V_min,255);
   //cvCreateTrackbar("HighV","Control",&V_max,255);

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
   
   
   //imshow("mask_image", img_thresholded);

   
   //Calculate contours and boundingbox
   vector<vector<Point> > contours;
   vector<Vec4i> hierarchy;
   findContours(img_thresholded,contours,hierarchy,CV_RETR_TREE,CV_CHAIN_APPROX_SIMPLE,Point(0,0));

   vector<vector<Point> > contours_poly( contours.size() );
   vector<Rect> boundRect( contours.size() ); 
   vector<int> selected;
   vector<int> area;
   double ratio_max =3.0;
   double ratio_min = 1.0;
   int area_thresh = 50;   
    
   for( int i = 0; i < contours.size(); i++ )
     { 
       approxPolyDP( Mat(contours[i]), contours_poly[i], 3, true );
       boundRect[i] = boundingRect( Mat(contours_poly[i]) );
       double boundRect_ratio = double(boundRect[i].height) / double(boundRect[i].width);
       int boundRect_area = boundRect[i].height * boundRect[i].width;
      // printf ("blob[%d] - height=%d - width=%d -ratio = %i \n",i,boundRect[i].height, boundRect[i].width, boundRect_area);
       if (boundRect_ratio>ratio_min && boundRect_ratio<ratio_max && boundRect_area > area_thresh)
          { 
           selected.push_back(i);
           area.push_back(boundRect_area);
          }
     }
    
   if (selected.empty())
   {
     printf("I did not see the object \n");
     // publisher
     detected_msg.data = false; 
     detected_pub.publish(detected_msg);    
   }
   else 
   {
     int idx = distance(area.begin(),max_element(area.begin(),area.end()));
     //printf("idx=%i -select=%i \n",idx, selected[idx]);
     Scalar color = Scalar(0, 128, 0);
     //drawContours( drawing, contours_poly, i, color, 1, 8, vector<Vec4i>(), 0, Point() );
     rectangle(img_color, boundRect[selected[idx]], color, 2, 8, 0 );  
     //Calculate the centroid
     Moments oMoments = moments(contours_poly[selected[idx]]);
     double dM01 = oMoments.m01;
     double dM10 = oMoments.m10;
     double dArea = oMoments.m00;
     int posX = dM10 / dArea;
     int posY = dM01 / dArea;
     circle(img_color,Point(posX, posY),3,CV_RGB(255,255,255));
    //Distance & angle calculation
    float f = 299.5;
    float Z_w1 = f/boundRect[selected[idx]].height * 0.57;
    float Z_w2 = f/boundRect[selected[idx]].width * 0.40;
    float distance = float (Z_w1 + Z_w2)/2;
    printf("x=%i, y=%i \n",posX, posY);
    float angle = 0.3;
    // publisher
    dist_msg.data = distance;
    angle_msg.data = angle;
    detected_msg.data = true;
    dist_pub.publish(dist_msg);
    angle_pub.publish(angle_msg);
    detected_pub.publish(detected_msg);
    // Output modified video stream
   // image_pub_.publish(cv_ptr->toImageMsg());
  }
   // Show window and update the GUI
   imshow("husky_vision",img_color);
   waitKey(3);
}
