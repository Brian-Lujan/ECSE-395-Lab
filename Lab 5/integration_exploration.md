# Lab 5 - Integration Exploration
Brian Lujan - 9/25/2026

## Introduction
This is my last assignment working with the ESP32. I will work
on integrating sensors and actuators. I will be flashing the code to the ESP32 via PlatformIO running in VSCode on my Macbook Pro. My sensor an actuator of choiuce are the PIR Motion Sensor and the Tuned Torque Motor. 

In this repository, the reader can find the entire source code for the project in 'src/main.cpp'. 

### Functionality

This code is designed to detect motion from the motion detector. If motion is detected, the sensor will output a '1' and the ESP32 will actuate the motor counterclockwise at full torque. The system will pause for 5 seconds since that is the maximum read frequency of the sensor. If there is no motion detected, the sensor will output a '0' and the ESP32 will halt the motor.

## Lab 5

Steps I took to complete this lab:
1. Pick a sensor and actuator (I based my choices off of what I want to use for our stakeholder concepts)
2. Read documentation on how to operate the motion detector
3. Wire up cicuit with motion detector on the digital input and the TT motor on the analog output
4. Test basic code to test if I can read / write to / from the sensors
5. Design a condition structure to actuate the motor once motion is detected
6. Build the code and select "Upload/Monitor" to the ESP32 with PlatformIO
7. Record demo
8. Write these steps

## Reflection

1. How long did it take you to complete this assignment?
- The full class period
2. What level of difficulty would you associate with this assignment?
- Low
4. How comfortable do you currently feel with the course content?
- Exceptionally
5. Do you have any additional information or feedback you would like to share with
the instructors?
- This should be a 75 minute lab. 