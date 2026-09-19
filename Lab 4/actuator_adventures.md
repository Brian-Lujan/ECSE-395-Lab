# Lab 4 - Actuator Adventures
Brian Lujan - 9/18/2026

## Lab Overview

This is my third assignment working with the ESP32. I will work on connecting actuators to ESP32. I will be using PlatformIO on a MacBook Pro to upload my code to the ESP32 for this assignment. 

In this repository, you can find the following code (in /src/):
- Servo Motor Random.cpp
- Servo Motor.cpp
- TT Motor Rotate.cpp
- TT Motor.cpp

I took the following steps to complete this assignment:

1. Wire the TT motor according to the diagram
2. Initialize the ESP32 with the motor settings
3. Adjust TT Motor Rotate.cpp with the correct values
4. Build, then upload code to ESP32 with PlatformIO
4. Run the code and observe rotations
5. Wire the servo according to the diagram
6. Initialize the ESP32 with the motor settings
7. Adjust Servo Motor Random.cpp to the correct settings
4. Build, then upload code to ESP32 with PlatformIO
8. Run the code and observe rotations

## TT Motor - Descriptions

Modifying these values does the following:
analogWrite(): Swaps which pins are powered and therefore rotating the motor
Swapping analogWrite(): Switches the direction in which the motor rotates
delay(): Changes how long between motor rotations


## Servo Motor - Descriptions

The following commands do the following things:
minPulseWidth(): Sets the minimum amount of time that the command to rotate is on HIGH
maxPulseWidth(): Sets the maximum amount of time that the command to rotate is HIGH
setPeriodHertz(): Sets the amount of time that the command takes to send to the servo
Rotation Range: Sets the range that the motor can rotate
delay(): Time between rotations

## Reflection
1. How long did it take you to complete this assignment?
- The whole class period

2. What level of difficulty would you associate with this assignment?
□ Low

3. How comfortable do you currently feel with the course content?
- Very comfortable

4. Do you have any additional information or feedback you would like to share with
the instructors?
- Make this lab 75 minutes. This is not enough time for inexperienced people to complete it.


