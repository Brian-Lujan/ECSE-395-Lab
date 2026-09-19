
#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0;

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 250; // 0.25 ms
const int maxPulseWidth = 4000; // 4 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // bal131 - Sets the frequency that commands are sent to the motor
  myServo.setPeriodHertz(25); // Standard 50Hz servo
}

void loop() {
    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    // bal131 - Generates a random number between 0 and 360
    randomAngle = random(0, 360); // random(A,B); returns a random value between A and B

    // ---SECTION 2: Map Pulse Width with Angle
    // bal131 - Configures the pulses being sent to the motor with a range of orientations, angle, and pulse widths
    pulseWidth = map(randomAngle, 0, 360, minPulseWidth, maxPulseWidth); // from Servo Motor.cpp, what did you learn from using map function?
    myServo.writeMicroseconds(pulseWidth); // writing pulse width to servo

    // bal131 - Time delay between rotations
    delay(1000); // change delay to your own preference
}
