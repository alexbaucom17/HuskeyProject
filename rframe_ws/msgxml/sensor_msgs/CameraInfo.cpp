// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
//  From Template/Script: data_templates/DataClassTemplate.cpp
 
/*
  CTA RIGHTS

  This document contains information proprietary to General Dynamics
  Robotic Systems and is not to be reproduced, transmitted, transferred,
  or otherwise used without the express written consent of General
  Dynamics Robotic Systems except as described below.

  GOVERNMENT PURPOSE RIGHTS

  Contract No.:        W911NF-10-2-0016, Articles of Collaboration,
                       Article 5, Intellectual Property
  Contractor Name:     General Dynamics Robotic Systems, Inc. (GDRS)
  Contractor Address:  1231 Tech Court, Westminster, MD  21157

  Expiration Date - None

  Technical data and computer software first created by Member(s) in
  performance of the Agreement will be disclosed to the Government.
  General Dynamics Robotic Systems retains the entire right, title, and
  interest throughout the world to each subject invention subject to the
  provisions of this clause and 37 CFR Part 401, 32 CFR 32.36, and
  34 CFR 34.25. The Government shall have the right to obtain, reproduce,
  publish or otherwise use the work for Government purposes.

  NON-EXCLUSIVE LICENSE TO CONSORTIUM PARTICIPANTS
  Consortium Members and subawardees are defined as 'Participants'
  Under Article 5.3, Participants are granted a nonexclusive, royalty-
  free, non-sublicenseable, non-assignable, license to Consortium
  Intellectual Property for the limited purpose of performing tasks under
  The Cooperative Agreement, for Government purposes only, and to make and
  have the same made solely for such use.

*/

#include <math.h> // to allow use of common constants...
#include <common/Error.h>
#include "sensor_msgs/CameraInfo.h"
#include <string.h> // for memset 
#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::CameraInfo::ID;
const unsigned int sensor_msgs::CameraInfo::DATA_VERSION;
const std::string sensor_msgs::CameraInfo::DATA_TYPE_NAME = "CameraInfo";
const std::string sensor_msgs::CameraInfo::DATA_TYPE_FULL_NAME = "sensor_msgs::CameraInfo";
const std::string sensor_msgs::CameraInfo::VERSION_MD5 = "4f37f804678f46e1cfb386fb088b0a7c";
/* xml source for this class */
const std::string sensor_msgs::CameraInfo::XML_SOURCE = "<class name=\"CameraInfo\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"c9a58c1b0b154e0e6da7578cb991d214\" rosDesc=\"# This message defines meta information for a camera. It should be in a\\n# camera namespace on topic \\&quot;camera_info\\&quot; and accompanied by up to five\\n# image topics named:\\n#\\n#   image_raw - raw data from the camera driver, possibly Bayer encoded\\n#   image            - monochrome, distorted\\n#   image_color      - color, distorted\\n#   image_rect       - monochrome, rectified\\n#   image_rect_color - color, rectified\\n#\\n# The image_pipeline contains packages (image_proc, stereo_image_proc)\\n# for producing the four processed image topics from image_raw and\\n# camera_info. The meaning of the camera parameters are described in\\n# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.\\n#\\n# The image_geometry package provides a user-friendly interface to\\n# common operations using this meta information. If you want to, e.g.,\\n# project a 3d point into image coordinates, we strongly recommend\\n# using image_geometry.\\n#\\n# If the camera is uncalibrated, the matrices D, K, R, P should be left\\n# zeroed out. In particular, clients may assume that K[0] == 0.0\\n# indicates an uncalibrated camera.\\n\\n#######################################################################\\n#                     Image acquisition info                          #\\n#######################################################################\\n\\n# Time of image acquisition, camera coordinate frame ID\\nHeader header    # Header timestamp should be acquisition time of image\\n                 # Header frame_id should be optical frame of camera\\n                 # origin of frame should be optical center of camera\\n                 # +x should point to the right in the image\\n                 # +y should point down in the image\\n                 # +z should point into the plane of the image\\n\\n\\n#######################################################################\\n#                      Calibration Parameters                         #\\n#######################################################################\\n# These are fixed during camera calibration. Their values will be the #\\n# same in all messages until the camera is recalibrated. Note that    #\\n# self-calibrating systems may \\&quot;recalibrate\\&quot; frequently.              #\\n#                                                                     #\\n# The internal parameters can be used to warp a raw (distorted) image #\\n# to:                                                                 #\\n#   1. An undistorted image (requires D and K)                        #\\n#   2. A rectified image (requires D, K, R)                           #\\n# The projection matrix P projects 3D points into the rectified image.#\\n#######################################################################\\n\\n# The image dimensions with which the camera was calibrated. Normally\\n# this will be the full camera resolution in pixels.\\nuint32 height\\nuint32 width\\n\\n# The distortion model used. Supported models are listed in\\n# sensor_msgs/distortion_models.h. For most cameras, \\&quot;plumb_bob\\&quot; - a\\n# simple model of radial and tangential distortion - is sufficient.\\nstring distortion_model\\n\\n# The distortion parameters, size depending on the distortion model.\\n# For \\&quot;plumb_bob\\&quot;, the 5 parameters are: (k1, k2, t1, t2, k3).\\nfloat64[] D\\n\\n# Intrinsic camera matrix for the raw (distorted) images.\\n#     [fx  0 cx]\\n# K = [ 0 fy cy]\\n#     [ 0  0  1]\\n# Projects 3D points in the camera coordinate frame to 2D pixel\\n# coordinates using the focal lengths (fx, fy) and principal point\\n# (cx, cy).\\nfloat64[9]  K # 3x3 row-major matrix\\n\\n# Rectification matrix (stereo cameras only)\\n# A rotation matrix aligning the camera coordinate system to the ideal\\n# stereo image plane so that epipolar lines in both stereo images are\\n# parallel.\\nfloat64[9]  R # 3x3 row-major matrix\\n\\n# Projection/camera matrix\\n#     [fx'  0  cx' Tx]\\n# P = [ 0  fy' cy' Ty]\\n#     [ 0   0   1   0]\\n# By convention, this matrix specifies the intrinsic (camera) matrix\\n#  of the processed (rectified) image. That is, the left 3x3 portion\\n#  is the normal camera intrinsic matrix for the rectified image.\\n# It projects 3D points in the camera coordinate frame to 2D pixel\\n#  coordinates using the focal lengths (fx', fy') and principal point\\n#  (cx', cy') - these may differ from the values in K.\\n# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will\\n#  also have R = the identity and P[1:3,1:3] = K.\\n# For a stereo pair, the fourth column [Tx Ty 0]' is related to the\\n#  position of the optical center of the second camera in the first\\n#  camera's frame. We assume Tz = 0 so both cameras are in the same\\n#  stereo image plane. The first camera always has Tx = Ty = 0. For\\n#  the right (second) camera of a horizontal stereo pair, Ty = 0 and\\n#  Tx = -fx' * B, where B is the baseline between the cameras.\\n# Given a 3D point [X Y Z]', the projection (x, y) of the point onto\\n#  the rectified image is given by:\\n#  [u v w]' = P * [X Y Z 1]'\\n#         x = u / w\\n#         y = v / w\\n#  This holds for both images of a stereo pair.\\nfloat64[12] P # 3x4 row-major matrix\\n\\n\\n#######################################################################\\n#                      Operational Parameters                         #\\n#######################################################################\\n# These define the image region actually captured by the camera       #\\n# driver. Although they affect the geometry of the output image, they #\\n# may be changed freely without recalibrating the camera.             #\\n#######################################################################\\n\\n# Binning refers here to any camera setting which combines rectangular\\n#  neighborhoods of pixels into larger \\&quot;super-pixels.\\&quot; It reduces the\\n#  resolution of the output image to\\n#  (width / binning_x) x (height / binning_y).\\n# The default values binning_x = binning_y = 0 is considered the same\\n#  as binning_x = binning_y = 1 (no subsampling).\\nuint32 binning_x\\nuint32 binning_y\\n\\n# Region of interest (subwindow of full camera resolution), given in\\n#  full resolution (unbinned) image coordinates. A particular ROI\\n#  always denotes the same window of pixels on the camera sensor,\\n#  regardless of binning settings.\\n# The default setting of roi (all values 0) is considered the same as\\n#  full resolution (roi.width = width, roi.height = height).\\nRegionOfInterest roi\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: sensor_msgs/RegionOfInterest\\n# This message is used to specify a region of interest within an image.\\n#\\n# When used to specify the ROI setting of the camera when the image was\\n# taken, the height and width fields should either match the height and\\n# width fields for the associated image; or height = width = 0\\n# indicates that the full resolution image was captured.\\n\\nuint32 x_offset  # Leftmost pixel of the ROI\\n                 # (0 if the ROI includes the left edge of the image)\\nuint32 y_offset  # Topmost pixel of the ROI\\n                 # (0 if the ROI includes the top edge of the image)\\nuint32 height    # Height of ROI\\nuint32 width     # Width of ROI\\n\\n# True if a distinct rectified ROI should be calculated from the \\&quot;raw\\&quot;\\n# ROI in this message. Typically this should be False if the full image\\n# is captured (ROI not used), and True if a subwindow is captured (ROI\\n# used).\\nbool do_rectify\\n\" comment=\"This message defines meta information for a camera. It should be in a  camera namespace on topic &quot;camera_info&quot; and accompanied by up to five  image topics named:     image_raw - raw data from the camera driver, possibly Bayer encoded    image            - monochrome, distorted    image_color      - color, distorted    image_rect       - monochrome, rectified    image_rect_color - color, rectified   The image_pipeline contains packages (image_proc, stereo_image_proc)  for producing the four processed image topics from image_raw and  camera_info. The meaning of the camera parameters are described in  detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.   The image_geometry package provides a user-friendly interface to  common operations using this meta information. If you want to, e.g.,  project a 3d point into image coordinates, we strongly recommend  using image_geometry.   If the camera is uncalibrated, the matrices D, K, R, P should be left  zeroed out. In particular, clients may assume that K[0] == 0.0  indicates an uncalibrated camera.\" id=\"237354211\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"Header timestamp should be acquisition time of image  Header frame_id should be optical frame of camera  origin of frame should be optical center of camera  +x should point to the right in the image  +y should point down in the image  +z should point into the plane of the image                        Calibration Parameters                            These are fixed during camera calibration. Their values will be the   same in all messages until the camera is recalibrated. Note that      self-calibrating systems may &quot;recalibrate&quot; frequently.                                                                                      The internal parameters can be used to warp a raw (distorted) image   to:                                                                     1. An undistorted image (requires D and K)                            2. A rectified image (requires D, K, R)                             The projection matrix P projects 3D points into the rectified image.   The image dimensions with which the camera was calibrated. Normally  this will be the full camera resolution in pixels.\"/>\
  <field name=\"height\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"width\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"The distortion model used. Supported models are listed in  sensor_msgs/distortion_models.h. For most cameras, &quot;plumb_bob&quot; - a  simple model of radial and tangential distortion - is sufficient.\"/>\
  <field name=\"distortion_model\" type=\"string\" sourceType=\"string\" comment=\"The distortion parameters, size depending on the distortion model.  For &quot;plumb_bob&quot;, the 5 parameters are: (k1, k2, t1, t2, k3).\"/>\
  <field name=\"D\" type=\"vector(double)\" sourceType=\"float64\" comment=\"Intrinsic camera matrix for the raw (distorted) images.      [fx  0 cx]  K = [ 0 fy cy]      [ 0  0  1]  Projects 3D points in the camera coordinate frame to 2D pixel  coordinates using the focal lengths (fx, fy) and principal point  (cx, cy).\"/>\
  <field name=\"K\" type=\"double\" size=\"9\" sourceType=\"float64\" comment=\"3x3 row-major matrix  Rectification matrix (stereo cameras only)  A rotation matrix aligning the camera coordinate system to the ideal  stereo image plane so that epipolar lines in both stereo images are  parallel.\"/>\
  <field name=\"R\" type=\"double\" size=\"9\" sourceType=\"float64\" comment=\"3x3 row-major matrix  Projection/camera matrix      [fx'  0  cx' Tx]  P = [ 0  fy' cy' Ty]      [ 0   0   1   0]  By convention, this matrix specifies the intrinsic (camera) matrix   of the processed (rectified) image. That is, the left 3x3 portion   is the normal camera intrinsic matrix for the rectified image.  It projects 3D points in the camera coordinate frame to 2D pixel   coordinates using the focal lengths (fx', fy') and principal point   (cx', cy') - these may differ from the values in K.  For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will   also have R = the identity and P[1:3,1:3] = K.  For a stereo pair, the fourth column [Tx Ty 0]' is related to the   position of the optical center of the second camera in the first   camera's frame. We assume Tz = 0 so both cameras are in the same   stereo image plane. The first camera always has Tx = Ty = 0. For   the right (second) camera of a horizontal stereo pair, Ty = 0 and   Tx = -fx' * B, where B is the baseline between the cameras.  Given a 3D point [X Y Z]', the projection (x, y) of the point onto   the rectified image is given by:   [u v w]' = P * [X Y Z 1]'          x = u / w          y = v / w   This holds for both images of a stereo pair.\"/>\
  <field name=\"P\" type=\"double\" size=\"12\" sourceType=\"float64\" comment=\"3x4 row-major matrix                        Operational Parameters                            These define the image region actually captured by the camera         driver. Although they affect the geometry of the output image, they   may be changed freely without recalibrating the camera.                Binning refers here to any camera setting which combines rectangular   neighborhoods of pixels into larger &quot;super-pixels.&quot; It reduces the   resolution of the output image to   (width / binning_x) x (height / binning_y).  The default values binning_x = binning_y = 0 is considered the same   as binning_x = binning_y = 1 (no subsampling).\"/>\
  <field name=\"binning_x\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"binning_y\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"Region of interest (subwindow of full camera resolution), given in   full resolution (unbinned) image coordinates. A particular ROI   always denotes the same window of pixels on the camera sensor,   regardless of binning settings.  The default setting of roi (all values 0) is considered the same as   full resolution (roi.width = width, roi.height = height).\"/>\
  <field name=\"roi\" type=\"RegionOfInterest\" sourceType=\"RegionOfInterest\" comment=\"\"/>\
</class>";

sensor_msgs::CameraInfo::CameraInfo() : header(), height(0), width(0), distortion_model(), D(), binning_x(0), binning_y(0), roi()
{  
    memset(K.data(),0,sizeof(double)*9); 
    memset(R.data(),0,sizeof(double)*9); 
    memset(P.data(),0,sizeof(double)*12); 
};

sensor_msgs::CameraInfo::CameraInfo(const sensor_msgs::CameraInfo & inobj) : header(inobj.header), height(inobj.height), width(inobj.width), distortion_model(inobj.distortion_model), D(inobj.D), binning_x(inobj.binning_x), binning_y(inobj.binning_y), roi(inobj.roi)
{
    K = inobj.K;
    R = inobj.R;
    P = inobj.P;
};

sensor_msgs::CameraInfo::~CameraInfo()
{
};

sensor_msgs::CameraInfo * sensor_msgs::CameraInfo::New()
{ 
    return new CameraInfo();
};

bool sensor_msgs::CameraInfo::dataTypeFlat() 
{   
    return false; 
};

sensor_msgs::CameraInfo & sensor_msgs::CameraInfo::operator=(const sensor_msgs::CameraInfo & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::CameraInfo is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::CameraInfo));
        }
        else */ 
        {

            header = inobj.header;
            height = inobj.height;
            width = inobj.width;
            distortion_model = inobj.distortion_model;
            D = inobj.D;
            K = inobj.K;
            R = inobj.R;
            P = inobj.P;
            binning_x = inobj.binning_x;
            binning_y = inobj.binning_y;
            roi = inobj.roi;
        }
    }

    return *this;
}

bool sensor_msgs::CameraInfo::operator==(const sensor_msgs::CameraInfo & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (height == inobj.height)
             && (width == inobj.width)
             && (distortion_model == inobj.distortion_model)
             && (D == inobj.D)
             && (K == inobj.K)
             && (R == inobj.R)
             && (P == inobj.P)
             && (binning_x == inobj.binning_x)
             && (binning_y == inobj.binning_y)
             && (roi == inobj.roi);
    }

    return ret;
}

bool sensor_msgs::CameraInfo::operator!=(const sensor_msgs::CameraInfo & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::CameraInfo::operator<(const sensor_msgs::CameraInfo & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header < inobj.header) return true;
        if (inobj.header <  header) return false; 
        if (height < inobj.height) return true;
        if (inobj.height <  height) return false; 
        if (width < inobj.width) return true;
        if (inobj.width <  width) return false; 
        if (distortion_model < inobj.distortion_model) return true;
        if (inobj.distortion_model <  distortion_model) return false; 
        if (D < inobj.D) return true;
        if (inobj.D <  D) return false; 
        if (K < inobj.K) return true;
        if (inobj.K <  K) return false; 
        if (R < inobj.R) return true;
        if (inobj.R <  R) return false; 
        if (P < inobj.P) return true;
        if (inobj.P <  P) return false; 
        if (binning_x < inobj.binning_x) return true;
        if (inobj.binning_x <  binning_x) return false; 
        if (binning_y < inobj.binning_y) return true;
        if (inobj.binning_y <  binning_y) return false; 
        if (roi < inobj.roi) return true;
        if (inobj.roi <  roi) return false; ;
    }

    return ret;
}

bool sensor_msgs::CameraInfo::operator>(const sensor_msgs::CameraInfo & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header > inobj.header) return true;
        if (inobj.header >  header) return false; 
        if (height > inobj.height) return true;
        if (inobj.height >  height) return false; 
        if (width > inobj.width) return true;
        if (inobj.width >  width) return false; 
        if (distortion_model > inobj.distortion_model) return true;
        if (inobj.distortion_model >  distortion_model) return false; 
        if (D > inobj.D) return true;
        if (inobj.D >  D) return false; 
        if (K > inobj.K) return true;
        if (inobj.K >  K) return false; 
        if (R > inobj.R) return true;
        if (inobj.R >  R) return false; 
        if (P > inobj.P) return true;
        if (inobj.P >  P) return false; 
        if (binning_x > inobj.binning_x) return true;
        if (inobj.binning_x >  binning_x) return false; 
        if (binning_y > inobj.binning_y) return true;
        if (inobj.binning_y >  binning_y) return false; 
        if (roi > inobj.roi) return true;
        if (inobj.roi >  roi) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::CameraInfo & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"height",t.height,indent,false);
    rframe::json_io::encode(sstr,"width",t.width,indent,false);
    rframe::json_io::encode(sstr,"distortion_model",t.distortion_model,indent,false);
    rframe::json_io::encode(sstr,"D",t.D,indent,false);
    rframe::json_io::encode(sstr,"K",t.K,indent,false);
    rframe::json_io::encode(sstr,"R",t.R,indent,false);
    rframe::json_io::encode(sstr,"P",t.P,indent,false);
    rframe::json_io::encode(sstr,"binning_x",t.binning_x,indent,false);
    rframe::json_io::encode(sstr,"binning_y",t.binning_y,indent,false);
    rframe::json_io::encode(sstr,"roi",t.roi,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::CameraInfo::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::CameraInfo & value)
{
    return s << value.toStr(false);
}
