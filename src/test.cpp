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
#include <std_msgs/String.h>

using namespace std;

int main(int argc, char** argv){
	//talker
	
	ros::init(argc, argv, "network_test");
	ros::NodeHandle nh;
	
	ros::Publisher sendMsg = nh.advertise<std_msgs::String>("messages", 10);
	
	std_msgs::String a;
	a.data = "Hello world";
	

	ros::Rate(10);
	while(ros::ok()){
		sendMsg.publish(a);
		ros::spinOnce();
	}
	
	
	
	return 0;
}
