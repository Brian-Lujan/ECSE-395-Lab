#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // TODO: Define your text output
  Serial.println("Help I am being held hostage in the Glennan Lab and they won't let me leave until I solve P=NP"); // Print the words to the Serial Monitor.
  
  //SOS in morse code cause help me
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200); 
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200); 
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200); 

  digitalWrite(LED_PIN, HIGH); 
  delay(500); 
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH); 
  delay(500);
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);

  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200); 
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(200); 
  digitalWrite(LED_PIN, HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(2000); 

  //For legal reasons I am fine I do not need help

}

//- Notes:
//	- Please uncomment the necessary lines and fill in the blank to complete the assignment.
//	- In `Serial.begin(_____);`
//		- `115200` is recommended, but feel free to try it at other baud rates.
//		- Baud rate is the speed of data transmission, measuring the number of signal changes per second in communication channel.