// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
//  From Template/Script: data_templates/DataHeaderTemplate.h
 
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

#ifndef _CODEGEN_SENSOR_MSGS_CAMERAINFO_H_
#define _CODEGEN_SENSOR_MSGS_CAMERAINFO_H_

//#include <ostream> handled by iosfwd included through <memory> in Common.h
#include <common/Common.h>
#include <common/CodeGenTraits.h>

#include <array>
#include <sensor_msgs/RegionOfInterest.h>
#include <std_msgs/Header.h>
#include <string>
#include <vector>

// predeclaration
namespace sensor_msgs{ 
    class CameraInfo; 
}; 

PREDECLARE_BSON(sensor_msgs::CameraInfo); // see Common.h, macro used for a cleaner header
PREDECLARE_JSON(sensor_msgs::CameraInfo); // see Common.h, macro used for a cleaner header

namespace sensor_msgs
{  

    // definition of nml serialization function for this class, necessary for friend'ing below.
    void nmlupdate(CMS * cms, CameraInfo & inobj);   

    /** 
        \ingroup CodeGen
        This message defines meta information for a camera. It should be in a  camera namespace on topic "camera_info" and accompanied by up to five  image topics named:     image_raw - raw data from the camera driver, possibly Bayer encoded    image            - monochrome, distorted    image_color      - color, distorted    image_rect       - monochrome, rectified    image_rect_color - color, rectified   The image_pipeline contains packages (image_proc, stereo_image_proc)  for producing the four processed image topics from image_raw and  camera_info. The meaning of the camera parameters are described in  detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.   The image_geometry package provides a user-friendly interface to  common operations using this meta information. If you want to, e.g.,  project a 3d point into image coordinates, we strongly recommend  using image_geometry.   If the camera is uncalibrated, the matrices D, K, R, P should be left  zeroed out. In particular, clients may assume that K[0] == 0.0  indicates an uncalibrated camera.
    */
    class CameraInfo
    {
    public: 

        /** constructor */
        CameraInfo();
        /** copy constructor */
        CameraInfo(const CameraInfo & inobj);
        /** destructor */
        ~CameraInfo();

        /** allocator, convenience function for bind */
        static CameraInfo * New();

        /* shorthand definitions for constant sized arrays */
        /** definition of max size of array for K */
        static const unsigned int K_MAX = 9;
        /** shorthand definition for array of K */
        typedef std::array<double,K_MAX> KArray;

        /** definition of max size of array for R */
        static const unsigned int R_MAX = 9;
        /** shorthand definition for array of R */
        typedef std::array<double,R_MAX> RArray;

        /** definition of max size of array for P */
        static const unsigned int P_MAX = 12;
        /** shorthand definition for array of P */
        typedef std::array<double,P_MAX> PArray;

        // PUBLIC_POST_PROCESS_INSERT_TAG
        /** definitions */

        /* data member definition */ 
        std_msgs::Header  header; /**< Header timestamp should be acquisition time of image  Header frame_id should be optical frame of camera  origin of frame should be optical center of camera  +x should point to the right in the image  +y should point down in the image  +z should point into the plane of the image                        Calibration Parameters                            These are fixed during camera calibration. Their values will be the   same in all messages until the camera is recalibrated. Note that      self-calibrating systems may "recalibrate" frequently.                                                                                      The internal parameters can be used to warp a raw (distorted) image   to:                                                                     1. An undistorted image (requires D and K)                            2. A rectified image (requires D, K, R)                             The projection matrix P projects 3D points into the rectified image.   The image dimensions with which the camera was calibrated. Normally  this will be the full camera resolution in pixels. */
        unsigned int  height; /**<  */
        unsigned int  width; /**< The distortion model used. Supported models are listed in  sensor_msgs/distortion_models.h. For most cameras, "plumb_bob" - a  simple model of radial and tangential distortion - is sufficient. */
        std::string  distortion_model; /**< The distortion parameters, size depending on the distortion model.  For "plumb_bob", the 5 parameters are: (k1, k2, t1, t2, k3). */
        std::vector<double >  D; /**< Intrinsic camera matrix for the raw (distorted) images.      [fx  0 cx]  K = [ 0 fy cy]      [ 0  0  1]  Projects 3D points in the camera coordinate frame to 2D pixel  coordinates using the focal lengths (fx, fy) and principal point  (cx, cy). */
        std::array<double,9>  K; /**< 3x3 row-major matrix  Rectification matrix (stereo cameras only)  A rotation matrix aligning the camera coordinate system to the ideal  stereo image plane so that epipolar lines in both stereo images are  parallel. */
        std::array<double,9>  R; /**< 3x3 row-major matrix  Projection/camera matrix      [fx'  0  cx' Tx]  P = [ 0  fy' cy' Ty]      [ 0   0   1   0]  By convention, this matrix specifies the intrinsic (camera) matrix   of the processed (rectified) image. That is, the left 3x3 portion   is the normal camera intrinsic matrix for the rectified image.  It projects 3D points in the camera coordinate frame to 2D pixel   coordinates using the focal lengths (fx', fy') and principal point   (cx', cy') - these may differ from the values in K.  For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will   also have R = the identity and P[1:3,1:3] = K.  For a stereo pair, the fourth column [Tx Ty 0]' is related to the   position of the optical center of the second camera in the first   camera's frame. We assume Tz = 0 so both cameras are in the same   stereo image plane. The first camera always has Tx = Ty = 0. For   the right (second) camera of a horizontal stereo pair, Ty = 0 and   Tx = -fx' * B, where B is the baseline between the cameras.  Given a 3D point [X Y Z]', the projection (x, y) of the point onto   the rectified image is given by:   [u v w]' = P * [X Y Z 1]'          x = u / w          y = v / w   This holds for both images of a stereo pair. */
        std::array<double,12>  P; /**< 3x4 row-major matrix                        Operational Parameters                            These define the image region actually captured by the camera         driver. Although they affect the geometry of the output image, they   may be changed freely without recalibrating the camera.                Binning refers here to any camera setting which combines rectangular   neighborhoods of pixels into larger "super-pixels." It reduces the   resolution of the output image to   (width / binning_x) x (height / binning_y).  The default values binning_x = binning_y = 0 is considered the same   as binning_x = binning_y = 1 (no subsampling). */
        unsigned int  binning_x; /**<  */
        unsigned int  binning_y; /**< Region of interest (subwindow of full camera resolution), given in   full resolution (unbinned) image coordinates. A particular ROI   always denotes the same window of pixels on the camera sensor,   regardless of binning settings.  The default setting of roi (all values 0) is considered the same as   full resolution (roi.width = width, roi.height = height). */
        RegionOfInterest  roi; /**<  */

        /** DAQ enumeration not sure how to use it yet. here for proof of concept. */
        typedef enum
        { 
            DAQ_0_HEADER,
            DAQ_1_HEIGHT,
            DAQ_2_WIDTH,
            DAQ_3_DISTORTION_MODEL,
            DAQ_4_D,
            DAQ_5_K,
            DAQ_6_R,
            DAQ_7_P,
            DAQ_8_BINNING_X,
            DAQ_9_BINNING_Y,
            DAQ_10_ROI,
            DAQ_MAX_
        } DAQEnum;

        /* definition of member accessor methods */

        // PROTECTED_POST_PROCESS_INSERT_TAG

        /* data type definitions and methods */

        /** static data type id. capitlized to remove name conflicts with generate class members */
        static const unsigned int ID = 237354211U;
        /** data class version, created from a hash function. 
            global version of this data type is defined by the pair <id,version>
            as id will be unique between classes, and the hash should be unique within this class */
        static const unsigned int DATA_VERSION = 2964729322U;
        /** if true, this message may be delivered internally */
        static const bool INTRAPROCESS = true;
        /** xml source for this class */
        static const std::string XML_SOURCE;
        /** name of this data type. */
        //        static const char * dataTypeName() { return "CameraInfo"; };
        /** name of this data type */
        static const std::string DATA_TYPE_NAME;
        /** full name of data type, including namespace */
        static const std::string DATA_TYPE_FULL_NAME;
        /** does this class have bson support? */
        static const bool BSON_ENABLED = true;
        /** is this a "flat" data structure, meaning it can be memcpy'd safely 
            for now it is assumed that classes with virtual members are not flat
        */
        static bool dataTypeFlat();

        /** MD5sum of a string representation of the class, included as it is more robust than the hash above */
        static const std::string versionMD5() { return "4f37f804678f46e1cfb386fb088b0a7c"; };
        /** md5 version of this data type */
        static const std::string VERSION_MD5;
        /** top 8 bytes of md5 in binary */
        static const unsigned long long VERSION_MD5_TOP = 0x4f37f804678f46e1ULL;
        /** lower 8 bytes of md5 in binary */
        static const unsigned long long VERSION_MD5_BOTTOM = 0xcfb386fb088b0a7cULL;

        /** register this data type with the global type registry */
        //        static int registerType();

        /** \return a copy of this instance.  */
        CameraInfo * copy() { return new CameraInfo(*this); };

        /** assignment operator(s) */
        CameraInfo & operator=(const CameraInfo & inobj);
        /** equality operator */
        bool operator==(const CameraInfo & inobj) const;
        /** inequality operator */
        bool operator!=(const CameraInfo & inobj) const;
        /** less than operator */
        bool operator<(const CameraInfo & inobj) const;
        /** greater than operator */
        bool operator>(const CameraInfo & inobj) const;

        /** convert to string representation */
        std::string toXML() const;

        /** convert from string representation. class constructor is not provided due to potential conflicts with string derived classes */
        bool fromXML(const std::string &str);

        /** convert this class to a JSON string representation, provides std::bind'able string creation */
        std::string toStr(bool pretty = true) const;

        /** generic serialization encoder entrypoint
            currently instantiated with boost .cpp file
            \param type type of serialization used, values defined in Common.h
            \param buffer object to be casted into proper container based on value of type.
            \return rframe::Error depending on serialization type used */
        int encode(const rframe::SerializationTypes type, void * buffer) const;

        /** generic serialization decoder entrypoint
            currently instantiated with boost .cpp file by the GENERIC_SERIALIZATION_ENTRYPOINTS macro
            \param type type of serialization used, values defined in Common.h
            \param buffer object to be casted into proper container based on value of type.
            \return rframe::Error depending on serialization type used */
        int decode(const rframe::SerializationTypes type, void * buffer);

    private:

        /* definition of friend access for serialization helpers */
        friend void nmlupdate(CMS * cms, CameraInfo & inobj);

        DECLARE_BSON_FRIENDS(); // defined in Common.h, declares friend access to bson serializers

        template <class T> friend struct ros::serialization::Serializer;

        friend class boost::serialization::access;       

        /** boost serialization method. See "http://www.boost.org/libs/serialization/doc/tutorial.html#derivedclasses" for reason why serialize() should be private. */
		template<class Archive> void serialize(Archive &ar, const unsigned int version);

        // PRIVATE_POST_PROCESS_INSERT_TAG

    };

}; // end namespace sensor_msgs

namespace rframe
{
    template <> class CodeGenTraits<sensor_msgs::CameraInfo>
    {
    public:
        static bool flat() {return sensor_msgs::CameraInfo::dataTypeFlat(); };
        static std::string sourceXML() {return sensor_msgs::CameraInfo::XML_SOURCE; };
        //        static bool codegen() {return true;};
        static constexpr bool codegen = true;
    };
};

/** ostream operator */
//std::ostream& operator<<(std::ostream &s, const sensor_msgs::CameraInfo & value);
std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::CameraInfo & value);

#endif  //  _SENSOR_MSGS_CAMERAINFO_H_