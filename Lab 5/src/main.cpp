#include <Arduino.h>

//Analog pins for TT motor
const int MOTOR_B_1A = A0;
const int MOTOR_B_1B = A1; 

//Digital pin to read distance sensor state
const int distancePin = 12;

void setup() {
    Serial.begin(115200);
    //Configure the TT input ports
    pinMode(MOTOR_B_1A, OUTPUT);
    pinMode(MOTOR_B_1B, OUTPUT);  


  Serial.println("Outputs configured");

}

void loop() {
    Serial.println("Checking for movement...");
    Serial.println("Distance pin state: " + String(digitalRead(distancePin)));

    //Periodic check to measure if motion has occured

    //NOTE: The minimum sensing distance in this config is 0m and the max is 3m
    //NOTE: The sensing delay is 5s
    switch (digitalRead(distancePin)){
        //If motion is detected...
        case HIGH:
            Serial.println("Object detected. Actuating...");
            Serial.println("Pausing for 5 seconds...");

            //Actuate the motor counterclockwise
            analogWrite(MOTOR_B_1A, 255);
            analogWrite(MOTOR_B_1B, 0);

            //Wait 5 seconds to not overload the motor with commands
            delay(5000);
            break;
            //If no motion is detected
        case LOW:
            Serial.println("No object detected");
            //Stop the motor
            analogWrite(MOTOR_B_1A, 0);
            analogWrite(MOTOR_B_1B, 0);
            break;
    }
    delay(100);
}