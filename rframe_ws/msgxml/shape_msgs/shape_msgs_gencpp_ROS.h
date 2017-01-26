// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:57:07 -0500
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

#ifndef _CODEGEN_SHAPE_MSGS_GENCPP_ROS_H_
#define _CODEGEN_SHAPE_MSGS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "shape_msgs_gencpp_Library.h"

#include "geometry_msgs/geometry_msgs_gencpp_ROS.h"
#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace shape_msgs { 

    /** definition of message factory for shape_msgs_gencpp */
    class shape_msgs_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        shape_msgs_gencppROSMessageFactory();
        /** destructor */
        virtual ~shape_msgs_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_shape_msgs_gencpp();

}; // end namespace shape_msgs

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<shape_msgs::Mesh>
      {
          template <typename Stream> inline static void write(Stream & stream, const shape_msgs::Mesh & t)
          { 
              stream.next(t.triangles); 
              stream.next(t.vertices); 
          };

          template <typename Stream> inline static void read(Stream & stream, shape_msgs::Mesh & t)
          { 
              stream.next(t.triangles); 
              stream.next(t.vertices); 
          };

          inline static uint32_t serializedLength(const shape_msgs::Mesh & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.triangles); 
              size += serializationLength(t.vertices); 
              return size;
          };
      }; // end struct Serializer<shape_msgs::Mesh>

      template <> struct Serializer<shape_msgs::MeshTriangle>
      {
          template <typename Stream> inline static void write(Stream & stream, const shape_msgs::MeshTriangle & t)
          { 
              stream.next(t.vertex_indices); 
          };

          template <typename Stream> inline static void read(Stream & stream, shape_msgs::MeshTriangle & t)
          { 
              stream.next(t.vertex_indices); 
          };

          inline static uint32_t serializedLength(const shape_msgs::MeshTriangle & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.vertex_indices); 
              return size;
          };
      }; // end struct Serializer<shape_msgs::MeshTriangle>

      template <> struct Serializer<shape_msgs::Plane>
      {
          template <typename Stream> inline static void write(Stream & stream, const shape_msgs::Plane & t)
          { 
              stream.next(t.coef); 
          };

          template <typename Stream> inline static void read(Stream & stream, shape_msgs::Plane & t)
          { 
              stream.next(t.coef); 
          };

          inline static uint32_t serializedLength(const shape_msgs::Plane & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.coef); 
              return size;
          };
      }; // end struct Serializer<shape_msgs::Plane>

      template <> struct Serializer<shape_msgs::SolidPrimitive>
      {
          template <typename Stream> inline static void write(Stream & stream, const shape_msgs::SolidPrimitive & t)
          { 
              stream.next(t.type); 
              stream.next(t.dimensions); 
          };

          template <typename Stream> inline static void read(Stream & stream, shape_msgs::SolidPrimitive & t)
          { 
              stream.next(t.type); 
              stream.next(t.dimensions); 
          };

          inline static uint32_t serializedLength(const shape_msgs::SolidPrimitive & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.type); 
              size += serializationLength(t.dimensions); 
              return size;
          };
      }; // end struct Serializer<shape_msgs::SolidPrimitive>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<shape_msgs::Mesh>
      {

          static const char * value() 
          { 
              return "1ffdae9486cd3316a121c578b47a85cc"; 
          };

          static const uint64_t static_value1 = 0x1ffdae9486cd3316ULL;
          static const uint64_t static_value2 = 0xa121c578b47a85ccULL;
      }; // end struct MD5Sum<shape_msgs::Mesh>

      template <> struct DataType<shape_msgs::Mesh>
      {
          static const char * value() { return "shape_msgs/Mesh";};
      }; // end DataType

      template <> struct Definition<shape_msgs::Mesh>
      {
          static const char * value()
          { 
              return "# Definition of a mesh\n\n# list of triangles; the index values refer to positions in vertices[]\nMeshTriangle[] triangles\n\n# the actual vertices that make up the mesh\ngeometry_msgs/Point[] vertices\n\n================================================================================\nMSG: shape_msgs/MeshTriangle\n# Definition of a triangle's vertices\nuint32[3] vertex_indices\n\n================================================================================\nMSG: geometry_msgs/Point\n# This contains the position of a point in free space\nfloat64 x\nfloat64 y\nfloat64 z\n";
          };
      };

      template <> struct MD5Sum<shape_msgs::MeshTriangle>
      {

          static const char * value() 
          { 
              return "23688b2e6d2de3d32fe8af104a903253"; 
          };

          static const uint64_t static_value1 = 0x23688b2e6d2de3d3ULL;
          static const uint64_t static_value2 = 0x2fe8af104a903253ULL;
      }; // end struct MD5Sum<shape_msgs::MeshTriangle>

      template <> struct DataType<shape_msgs::MeshTriangle>
      {
          static const char * value() { return "shape_msgs/MeshTriangle";};
      }; // end DataType

      template <> struct Definition<shape_msgs::MeshTriangle>
      {
          static const char * value()
          { 
              return "# Definition of a triangle's vertices\nuint32[3] vertex_indices\n";
          };
      };

      template <> struct MD5Sum<shape_msgs::Plane>
      {

          static const char * value() 
          { 
              return "2c1b92ed8f31492f8e73f6a4a44ca796"; 
          };

          static const uint64_t static_value1 = 0x2c1b92ed8f31492fULL;
          static const uint64_t static_value2 = 0x8e73f6a4a44ca796ULL;
      }; // end struct MD5Sum<shape_msgs::Plane>

      template <> struct DataType<shape_msgs::Plane>
      {
          static const char * value() { return "shape_msgs/Plane";};
      }; // end DataType

      template <> struct Definition<shape_msgs::Plane>
      {
          static const char * value()
          { 
              return "# Representation of a plane, using the plane equation ax + by + cz + d = 0\n\n# a := coef[0]\n# b := coef[1]\n# c := coef[2]\n# d := coef[3]\n\nfloat64[4] coef\n";
          };
      };

      template <> struct MD5Sum<shape_msgs::SolidPrimitive>
      {

          static const char * value() 
          { 
              return "d8f8cbc74c5ff283fca29569ccefb45d"; 
          };

          static const uint64_t static_value1 = 0xd8f8cbc74c5ff283ULL;
          static const uint64_t static_value2 = 0xfca29569ccefb45dULL;
      }; // end struct MD5Sum<shape_msgs::SolidPrimitive>

      template <> struct DataType<shape_msgs::SolidPrimitive>
      {
          static const char * value() { return "shape_msgs/SolidPrimitive";};
      }; // end DataType

      template <> struct Definition<shape_msgs::SolidPrimitive>
      {
          static const char * value()
          { 
              return "# Define box, sphere, cylinder, cone \n# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\nuint8 BOX=1\nuint8 SPHERE=2\nuint8 CYLINDER=3\nuint8 CONE=4\n\n# The type of the shape\nuint8 type\n\n\n# The dimensions of the shape\nfloat64[] dimensions\n\n# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\n# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n# sides of the box.\nuint8 BOX_X=0\nuint8 BOX_Y=1\nuint8 BOX_Z=2\n\n\n# For the SPHERE type, only one component is used, and it gives the radius of\n# the sphere.\nuint8 SPHERE_RADIUS=0\n\n\n# For the CYLINDER and CONE types, the center line is oriented along\n# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n# of dimensions gives the height of the cylinder (cone).  The\n# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n# radius of the base of the cylinder (cone).  Cone and cylinder\n# primitives are defined to be circular. The tip of the cone is\n# pointing up, along +Z axis.\n\nuint8 CYLINDER_HEIGHT=0\nuint8 CYLINDER_RADIUS=1\n\nuint8 CONE_HEIGHT=0\nuint8 CONE_RADIUS=1\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_SHAPE_MSGS_GENCPP_ROS_H_

