// Control a brushless motor through an ESC

// The code is written to arm and control a Hobbyking BLHeli Raptor ESC
// The arming procedure will vary per ESC


#include <Servo.h>

Servo myMotor;
int incomingString;

void setup() {
  // Put the motor to Arduino pin #3
  myMotor.attach(9);



  // Arming Procedure

  myMotor.write(0);             
  delay(5000);


  // Test Procedure
  myMotor.write(50);
  delay(20000);

  myMotor.write(58);
  delay(20000);

  myMotor.write(64);
  delay(20000);

  myMotor.write(72);
  delay(20000);

  myMotor.write(80);
  delay(20000);

  myMotor.write(88);
  delay(20000);

  myMotor.write(96);
  delay(20000);
  
  myMotor.write(104);
  delay(20000);

  myMotor.write(112);
  delay(20000);

  myMotor.write(120);
  delay(20000);
  
  myMotor.write(130);
  delay(20000);



  myMotor.write(100);
  delay(100);
  myMotor.write(50);
  delay(100);
  myMotor.write(0);

}


void loop() {

}



























