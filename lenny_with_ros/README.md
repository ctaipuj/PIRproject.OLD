# Waste separation task (Plastic Bottles sorting)

Part of the Perception for Industrial Robots Project is focused in using the SDA10F robot to execute a classification of plastic bottles as part of a recycling process.

This folder contains packages that were modified or created in order to execute a separation task using the dual-arm robot over ROS. The system is integrated with a computer vision algorithm based on *OpenCV* functions.

## Content

1. **learning_tf2** Is a tutorial package of tf2 package. Used only to learn how to create transformations... find more info at [tf2's site](http://wiki.ros.org/tf2/Tutorials)

2. **motoman** This is part of the [motoman package](http://wiki.ros.org/motoman), modified in order to be used with the SDA10F robot at CTAI. The environment description and the URDF files are available here

3. **vision** This is the package created in order to integrate the computer vision task based on *OpenCV* with the execution task of the robot with moveit!

4. **Robotiq** Gripper's package developed by robotiq.

5. **Lenny Calibration** Package used to calibrate Lenny with aruco markers.

*Created by Nicolas May 2018*
