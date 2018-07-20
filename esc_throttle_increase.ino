// Control a brushless motor through an ESC

// The code is written to arm and control a Hobbyking BLHeli Raptor ESC
// The arming procedure will vary per ESC


#include <Servo.h>

Servo myMotor;
int incomingString;

void setup() {
  // Put the motor to Arduino pin #3
  myMotor.attach(3);

  // Required for I/O from Serial monitor
  Serial.begin(9600);
  // Print a startup message
  Serial.println("initializing...");i


  // Arming Procedure

  myMotor.write(0);             
  delay(2000);


  // Test Procedure

  myMotor.write(50);
  delay(40000);

  myMotor.write(70);
  delay(40000);

  myMotor.write(90);
  delay(40000);

  myMotor.write(110);
  delay(40000);

  myMotor.write(130);
  delay(40000);

  myMotor.write(150);
  delay(40000);

}


void loop() {

}



























