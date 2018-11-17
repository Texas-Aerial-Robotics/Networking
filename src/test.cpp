#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <nav_msgs/Odometry.h>
#include "std_msgs/Float64.h"
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/PositionTarget.h>
#include <unistd.h>
#include <geometry_msgs/Pose2D.h>
#include <mavros_msgs/CommandTOL.h>
#include <time.h>
#include <cmath>
#include <math.h>
#include <ros/duration.h>
#include <string>

using namespace std;

void msg_cb(string msg){
	ROS_INFO(msg);
}

int main(int argc, char** argv){

	ros::init(argc, argv, "network_test");
	ros::NodeHandle nh;

	ros::Subsriber getMsg = nh.subscribe<string>("messages", 10, msg_cb);

	ros::spin();

	return 0;
}