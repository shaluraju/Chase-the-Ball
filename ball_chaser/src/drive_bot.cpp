#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "ball_chaser/DriveToTarget.h" 

// ROS::Publisher motor commands;
ros::Publisher motor_command_publisher;


bool handle_drive_request(ball_chaser::DriveToTarget::Request& req,
    ball_chaser::DriveToTarget::Response& res)
{
    ROS_INFO("Driving input received - linear: %1.2f, angular: %1.2f", (float)req.linear_x,    (float)req.angular_z);

    // Publish linear_x and angular_z to robot wheel
    geometry_msgs::Twist msg;

    msg.linear.x = req.linear_x;
    msg.angular.z = req.angular_z;
    motor_command_publisher.publish(msg);

    // Return a response message
    res.msg_feedback = "Velocities are set to: linear_x: " + std::to_string((float)msg.linear.x) + " , angular_z: " + std::to_string((float)msg.angular.z);
    ROS_INFO_STREAM(res.msg_feedback);

    return true;
}

int main(int argc, char** argv)
{
    // Initializing ROS node and creating ROS NodeHandle
    ros::init(argc, argv, "drive_bot");

    ros::NodeHandle n;

    // Inform ROS master that we will be publishing a message of type geometry_msgs::Twist on the robot actuation topic with a publishing queue size of 10
    motor_command_publisher = n.advertise<geometry_msgs::Twist>("/cmd_vel", 10);
    
    ros::ServiceServer service = n.advertiseService("/ball_chaser/command_robot", handle_drive_request);
    
    ros::spin();

    return 0;
}
