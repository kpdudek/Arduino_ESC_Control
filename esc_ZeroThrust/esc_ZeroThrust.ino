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
  delay(30000);

  myMotor.write(65);
  delay(30000);

  myMotor.write(80);
  delay(30000);

  myMotor.write(95);
  delay(30000);

  myMotor.write(0);
  delay(30000);

  myMotor.write(95);
  delay(30000);

  myMotor.write(80);
  delay(30000);
  
  myMotor.write(65);
  delay(30000);

  myMotor.write(50);
  delay(30000);



  myMotor.write(0);

}


void loop() {

}
