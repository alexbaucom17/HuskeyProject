// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:08 -0500
//  From Template/Script: data_templates/ROSTemplate.h.rb
 
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

#ifndef _CODEGEN_STEREO_MSGS_GENCPP_ROS_H_
#define _CODEGEN_STEREO_MSGS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "stereo_msgs_gencpp_Library.h"

#include "sensor_msgs/sensor_msgs_gencpp_ROS.h"
#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace stereo_msgs { 

    /** definition of message factory for stereo_msgs_gencpp */
    class stereo_msgs_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        stereo_msgs_gencppROSMessageFactory();
        /** destructor */
        virtual ~stereo_msgs_gencppROSMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(ros::SerializedMessage & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(ros::SerializedMessage * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, ros::SerializedMessage & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( ros::SerializedMessage & src, MessageBase & dst);

		/** see rframe::ROSMessageFactory */
        virtual int typeName(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int desc(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int md5String(std::string & str, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
        virtual int md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
		int updateHeader(rframe::MessageBase &msg, unsigned int seqNo);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    ROSMessageFactory * allocate_stereo_msgs_gencpp();

}; // end namespace stereo_msgs

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<stereo_msgs::DisparityImage>
      {
          template <typename Stream> inline static void write(Stream & stream, const stereo_msgs::DisparityImage & t)
          { 
              stream.next(t.header); 
              stream.next(t.image); 
              stream.next(t.f); 
              stream.next(t.T); 
              stream.next(t.valid_window); 
              stream.next(t.min_disparity); 
              stream.next(t.max_disparity); 
              stream.next(t.delta_d); 
          };

          template <typename Stream> inline static void read(Stream & stream, stereo_msgs::DisparityImage & t)
          { 
              stream.next(t.header); 
              stream.next(t.image); 
              stream.next(t.f); 
              stream.next(t.T); 
              stream.next(t.valid_window); 
              stream.next(t.min_disparity); 
              stream.next(t.max_disparity); 
              stream.next(t.delta_d); 
          };

          inline static uint32_t serializedLength(const stereo_msgs::DisparityImage & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.image); 
              size += serializationLength(t.f); 
              size += serializationLength(t.T); 
              size += serializationLength(t.valid_window); 
              size += serializationLength(t.min_disparity); 
              size += serializationLength(t.max_disparity); 
              size += serializationLength(t.delta_d); 
              return size;
          };
      }; // end struct Serializer<stereo_msgs::DisparityImage>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<stereo_msgs::DisparityImage>
      {

          static const char * value() 
          { 
              return "04a177815f75271039fa21f16acad8c9"; 
          };

          static const uint64_t static_value1 = 0x04a177815f752710ULL;
          static const uint64_t static_value2 = 0x39fa21f16acad8c9ULL;
      }; // end struct MD5Sum<stereo_msgs::DisparityImage>

      template <> struct DataType<stereo_msgs::DisparityImage>
      {
          static const char * value() { return "stereo_msgs/DisparityImage";};
      }; // end DataType

      template <> struct Definition<stereo_msgs::DisparityImage>
      {
          static const char * value()
          { 
              return "# Separate header for compatibility with current TimeSynchronizer.\n# Likely to be removed in a later release, use image.header instead.\nHeader header\n\n# Floating point disparity image. The disparities are pre-adjusted for any\n# x-offset between the principal points of the two cameras (in the case\n# that they are verged). That is: d = x_l - x_r - (cx_l - cx_r)\nsensor_msgs/Image image\n\n# Stereo geometry. For disparity d, the depth from the camera is Z = fT/d.\nfloat32 f # Focal length, pixels\nfloat32 T # Baseline, world units\n\n# Subwindow of (potentially) valid disparity values.\nsensor_msgs/RegionOfInterest valid_window\n\n# The range of disparities searched.\n# In the disparity image, any disparity less than min_disparity is invalid.\n# The disparity search range defines the horopter, or 3D volume that the\n# stereo algorithm can \"see\". Points with Z outside of:\n#     Z_min = fT / max_disparity\n#     Z_max = fT / min_disparity\n# could not be found.\nfloat32 min_disparity\nfloat32 max_disparity\n\n# Smallest allowed disparity increment. The smallest achievable depth range\n# resolution is delta_Z = (Z^2/fT)*delta_d.\nfloat32 delta_d\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: sensor_msgs/Image\n# This message contains an uncompressed image\n# (0, 0) is at top-left corner of image\n#\n\nHeader header        # Header timestamp should be acquisition time of image\n                     # Header frame_id should be optical frame of camera\n                     # origin of frame should be optical center of cameara\n                     # +x should point to the right in the image\n                     # +y should point down in the image\n                     # +z should point into to plane of the image\n                     # If the frame_id here and the frame_id of the CameraInfo\n                     # message associated with the image conflict\n                     # the behavior is undefined\n\nuint32 height         # image height, that is, number of rows\nuint32 width          # image width, that is, number of columns\n\n# The legal values for encoding are in file src/image_encodings.cpp\n# If you want to standardize a new string format, join\n# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\nstring encoding       # Encoding of pixels -- channel meaning, ordering, size\n                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\nuint8 is_bigendian    # is this data bigendian?\nuint32 step           # Full row length in bytes\nuint8[] data          # actual matrix data, size is (step * rows)\n\n================================================================================\nMSG: sensor_msgs/RegionOfInterest\n# This message is used to specify a region of interest within an image.\n#\n# When used to specify the ROI setting of the camera when the image was\n# taken, the height and width fields should either match the height and\n# width fields for the associated image; or height = width = 0\n# indicates that the full resolution image was captured.\n\nuint32 x_offset  # Leftmost pixel of the ROI\n                 # (0 if the ROI includes the left edge of the image)\nuint32 y_offset  # Topmost pixel of the ROI\n                 # (0 if the ROI includes the top edge of the image)\nuint32 height    # Height of ROI\nuint32 width     # Width of ROI\n\n# True if a distinct rectified ROI should be calculated from the \"raw\"\n# ROI in this message. Typically this should be False if the full image\n# is captured (ROI not used), and True if a subwindow is captured (ROI\n# used).\nbool do_rectify\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_STEREO_MSGS_GENCPP_ROS_H_

