# Chase-the-Ball

tree

.Udacity-Robotics-ChaseTheBall                  # Go Chase It! Project
├── README.md                                   # Project documentation
├── documentation                               
│   ├── gazebo.png
│   ├── rviz.png
│   └── terminal.png
├── ball_chaser                                 # ball chaser node
│   ├── CMakeLists.txt                          # Link libraries
│   ├── launch                                  # Starts the drive_bot and process_image nodes
│   │   └── ball_chaser.launch
│   ├── package.xml
│   ├── src
│   │   ├── drive_bot.cpp                       # Sends the twist commands the robot
│   │   └── process_image.cpp                   # Calculates velcoities based on camera image
│   └── srv                                     # Custom DriveToTarget service description
│       └── DriveToTarget.srv
└── my_robot                                    # ball chaser node
    ├── CMakeLists.txt                          # Link libraries
    ├── launch
    │   ├── robot_description.launch
    │   └── world.launch                        # starts the Gazebo simulation in MyWorld.world
    ├── meshes                                  # custom meshes for the robot model
    │   ├── chassis.SLDPRT
    │   ├── chassis.STEP
    │   ├── chassis.dae
    │   ├── hokuyo.dae
    │   ├── wheel.SLDPRT
    │   ├── wheel.STEP
    │   └── wheel.dae
    ├── package.xml
    ├── rviz
    │   └── my_robot.rviz                       # RViz config file
    ├── urdf                                    # Robot URDF description
    │   ├── my_robot.gazebo                     # Skid steer, camera and lidar plugins
    │   └── my_robot.xacro
    └── worlds
        ├── MyWorld.world                       # Simulated world in Gazebo
        └── empty.world


