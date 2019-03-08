// Control a brushless motor through an ESC

// The code is written to arm and control a Hobbyking BLHeli Raptor ESC
// The arming procedure will vary per ESC


#include <Servo.h>

Servo myMotor;

void setup() {
  // Put the motor to Arduino pin #9
  myMotor.attach(9);


  // Arming Procedure
  myMotor.write(0);             
  delay(5000);


  // Test Procedure
  myMotor.write(80);
  delay(30000);

  myMotor.write(90);
  delay(30000);

  myMotor.write(100);
  delay(30000);

  myMotor.write(110);
  delay(30000);

  myMotor.write(120);
  delay(30000);

  myMotor.write(130);
  delay(30000);

  myMotor.write(140);
  delay(30000);
  
  myMotor.write(150);
  delay(30000);


  // Disarm the motor
  myMotor.write(0);

}


void loop() {

}
