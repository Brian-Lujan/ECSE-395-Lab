#include <Arduino.h>

#define LED_PIN 13
//Put your potentiometer pin assignment here
const int sensorPin = A5;


void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  //bal131 - Matches the sensor output value to a boolean Touch / No Touch
  //bal131 - Detect no touch, turn off LED
  if (analogRead(sensorPin) == 0) {
      Serial.println("No touch detected");
      digitalWrite(LED_PIN, LOW);
    //bal131 - Detect touch, turn on LED
  } else if (analogRead(sensorPin) == 4095) {
      Serial.println("Touch detected!");
      digitalWrite(LED_PIN, HIGH);
  }
  
  delay(200); 
}
