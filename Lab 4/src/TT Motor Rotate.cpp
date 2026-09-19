/*
#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = 0;
const int MOTOR_B_1B = 0; 

void setup() {
  // TODO: Initialize Serial communication
  Serial.begin(115200);

  // bal131 - Sets motor pins as outputs
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT); 

  Serial.println("Outputs configured");
}

void loop() {
  // --- SECTION 1: Clokwise (5s) ---
  Serial.println("Turning clockwise");
  
  
  // bal131 - Powers one rotation direction and not another
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  
  delay(5000);

  // --- SECTION 2: Stop (2s) ---
  Serial.println("Stopping motor");
  
  // bal131 - Stops the motor
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);

  delay(2000);

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("Rotating counterclockwise");
  
  // bal131 - Inverts motor power, rotating in opposide direction
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);

  delay(5000);

  // --- SECTION 4: Stop (2s) ---
  Serial.println("Stopping");
  
  // bal131 - Stops motor
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);

  // bal131 - Pauses for 2 seconds before rotating again
  delay(2000);
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
*/