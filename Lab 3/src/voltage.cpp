/*
#include <Arduino.h>

// function prototype
int voltage(float analogvalue);



// Put your potentiometer pin assignment here
const int sensorPin = A5;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // bal131 - Reads the value of the analog pin and stores it
    int sensorValue = analogRead(sensorPin);

    //bal131 - Calculates teh voltage based on the sensor value and the reference voltage (max input of 4095, runs on a 3.3V circuit)
    //I accidentally did voltage calculations in the loop instead of using the voltage function
    float voltage = (sensorValue * 3.3) / 4095;

    //Prints the voltage being output by the potentiometer
    Serial.println(voltage);
   //bal131 - Displays 10 times a second
    delay(100); 
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
}

*/