# Go Chase the Ball

## Package Tree Structure
![tree](https://user-images.githubusercontent.com/67613439/125200822-1cb63700-e28a-11eb-87f5-3bdea279eeed.png)

## Result
![ezgif com-gif-maker](https://user-images.githubusercontent.com/67613439/125202411-17101f80-e291-11eb-8c8d-ec8fe843331f.gif)
A part Udacity Nanodegree Program
Introduction
A Wheeled robot that scans for a white ball in its environment and move navigates the target.

Description
We have two ROS packages: the drive_bot and the ball_chaser. Here are the steps to design the robot, house it inside your world, and program it to chase white-colored balls:

my_robot:

my_robot ROS package holds our robot model, the white ball, and the gazebo world file.

Robot model
4 Wheeled mobile robot with Differential drive.
A lidar sensor - Hokuyo.
A camera.
ball_chaser:

ball_chaser ROS package holds our C++ nodes.

drive_botC++
This node provide a ball_chaser/command_robot service to drive the robot by controlling its linear x and angular z velocities. The service should publish to the wheel joints and return back the requested velocities.
process_imageC++
This node reads our robot’s camera image, analyzes it to determine the presence and position of a white ball. If a white ball exists in the image, the node should request a service via a client to drive the robot towards it.
Basic Build Instructions
Create a catkin Workspace
    mkdir -p catkin_ws/src
    cd catkin_ws/src
    catkin_init_workspace
    cd ..
    catkin_make
Clone the repository
    cd catkin/src
    git clone https://github.com/Gopsee/Go-Chase-It.git
    cd ..
    catkin_make
Source the workspace
    source devel/setup.bash
Launch the main file
    roslaunch my_robot world.launch 
    roslaunch ball_chaser ball_chaser.launch
