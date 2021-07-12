# Go Chase the Ball
It is a part of **Udacity Robotics Software Enigneer Nano Degree** program.A mobile robot capable of following a movable white ball, using image processing is built. Visualization available on Rviz and Gazebo.
## Package Structure
![tree](https://user-images.githubusercontent.com/67613439/125200822-1cb63700-e28a-11eb-87f5-3bdea279eeed.png)

## Result
![ezgif com-gif-maker](https://user-images.githubusercontent.com/67613439/125202411-17101f80-e291-11eb-8c8d-ec8fe843331f.gif)


## Running the tests

### Simulating

To launch the world project

```
roslaunch my_robot world.launch 
```A 

### Chasing the ball



launching the chaser 

```
roslaunch ball_chaser ball_chaser.launch
```

Visualazing the ball

```
rosrun ball_chaser process_image 
```
