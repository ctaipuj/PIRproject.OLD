#ifndef ROS_TO_CV
#define ROS_TO_CV

#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vision/detection.h>
#include <std_msgs/UInt32.h>


class ImageConverter{

  cv::Mat A_color;
  cv::Mat B_depth;
  
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_color;
  image_transport::Subscriber image_sub_depth;
  //image_transport::Publisher image_pub_;
  ros::Publisher pub;// = node.advertise<transformation::detection>("algorithm_data", 1000); 
  ros::Subscriber sub;

public:
  ImageConverter();

  ~ImageConverter();
  
  void lenny_asks_callback(const std_msgs::UInt32& msg);

  void kinect_color_callback(const sensor_msgs::ImageConstPtr& color_msg);
  
  void kinect_depth_callback(const sensor_msgs::ImageConstPtr& depth_msg); 
  
  void computer_vision(std::vector<std::vector<double> > &data_to_ros);
  
  void publisher(std::vector<std::vector<double> > &data_to_ros);
  
  std::vector<double> selector(std::vector<std::vector<double> > data_to_ros);
};

#endif
