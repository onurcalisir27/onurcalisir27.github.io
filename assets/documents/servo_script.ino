#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwmController1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pwmController2 = Adafruit_PWMServoDriver(0x41);

// Declare Constants
const int OE1Pin = 2;     // OE pin for PCA9685 board 1
const int delayBetweenHoppers = 1000; // Do not need this at the final code probably

void setup() {
  Serial.begin(115200);    
  Wire.begin();

  // Initialize PCA9685 boards
  pwmController1.begin();
  pwmController1.setPWMFreq(50);  
  pwmController2.begin();
  pwmController2.setPWMFreq(50);

  // Setup and Wait for execution
  pinMode(OE1Pin, OUTPUT);
  digitalWrite(OE1Pin, LOW);
  initializeServos()
 
  // Disable both boards after initialization untill called
  digitalWrite(OE1Pin, HIGH);
}

void loop() {

  // Function to call as needed.
  delay(500);
//  dispenseHopper1();
// delay(delayBetweenHoppers); // Wait for 5 seconds

//  dispenseHopper2();
//  delay(delayBetweenHoppers); // Wait for 5 seconds

//  dispenseHopper3();
//  delay(delayBetweenHoppers); // Wait for 5 seconds

 //dispenseHopper4();
//  delay(delayBetweenHoppers); // Wait for 5 seconds

  delay(100000); //Super long delay so I have time to re-upload the code for testing

}

void initializeServos() {
  // Used to init all servos and return to orignal positions
  
  // Initialize PCA9685 #1
  setServoAngle(pwmController1, 0, 0);
  setServoAngle(pwmController1, 1, 0);
  setServoAngle(pwmController1, 2, 0);
  setServoAngle(pwmController1, 3, 90);

  setServoAngle(pwmController1, 4, 0);
  setServoAngle(pwmController1, 5, 0);
  setServoAngle(pwmController1, 6, 0);
  setServoAngle(pwmController1, 7, 90);

  // Initialize PCA9685 #2
  setServoAngle(pwmController2, 0, 0);
  setServoAngle(pwmController2, 2, 0);
  setServoAngle(pwmController2, 3, 0);
  setServoAngle(pwmController2, 4, 90);

  setServoAngle(pwmController2, 5, 0);
  setServoAngle(pwmController2, 6, 0);
  setServoAngle(pwmController2, 7, 0);
  setServoAngle(pwmController2, 8, 90);
}

// Code

void dispenseHopper1() {
  digitalWrite(OE1Pin, LOW); // Enable PCA9685 board 2
  dispenseServos(pwmController2, 0, 2, 3, 4);
  digitalWrite(OE1Pin, HIGH); // Disable PCA9685 board 2
}

void dispenseHopper2() {
  digitalWrite(OE1Pin, LOW); // Enable PCA9685 board 1
  dispenseServos(pwmController1, 0, 1, 2, 3);
  digitalWrite(OE1Pin, HIGH); // Disable PCA9685 board 1
}

void dispenseHopper3() {
  digitalWrite(OE1Pin, LOW); // Enable PCA9685 board 2
  dispenseServos(pwmController2, 5, 6, 7, 8);
  digitalWrite(OE1Pin, HIGH); // Disable PCA9685 board 2
}

void dispenseHopper4() {
  digitalWrite(OE1Pin, LOW); // Enable PCA9685 board 1
  dispenseServos(pwmController1, 4, 5, 6, 7);
  digitalWrite(OE1Pin, HIGH); // Disable PCA9685 board 1
}

void dispenseServos(Adafruit_PWMServoDriver &controller, int servo1, int servo2, int servo3, int servo4) {
  setServoAngle(controller, servo1, 45); // Adjust angles as needed for open position
  delay(1000); // Adjust delay as needed
  setServoAngle(controller, servo2, 45);
  delay(2000); // Time servos are open
 
  // Return to closed positions
  setServoAngle(controller, servo1, 0);
  setServoAngle(controller, servo2, 0);
  delay(3000); // Delay before next action

  int currentAngle = 0;

  // Increment until angle is 45
  while (currentAngle <= 45) {
    setServoAngle(controller, servo3, currentAngle);
    setServoAngle(controller, servo4, 90 - currentAngle);
    currentAngle += 5;
    delay(1000); // Adjust delay as needed
  }

  // Reset servo positions
  setServoAngle(controller, servo3, 0);
  setServoAngle(controller, servo4, 90);
  delay(3000);
}

void setServoAngle(Adafruit_PWMServoDriver &controller, uint8_t servoNumber, int angle) {
  // Convert angle to pulse length in microseconds
  int pulseLength = map(angle, 0, 180, 500, 2500); // Map angle to pulse length
  Serial.print("Setting servo ");
  Serial.print(servoNumber);
  Serial.print(" to angle ");
  Serial.print(angle);
  Serial.print(" (pulse length ");
  Serial.print(pulseLength);
  Serial.println(")");

  // Set PWM pulse length
  controller.writeMicroseconds(servoNumber, pulseLength);
}
