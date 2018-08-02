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
  delay(10000);

  myMotor.write(55);
  delay(10000);

  myMotor.write(60);
  delay(10000);

  myMotor.write(65);
  delay(10000);

  myMotor.write(70);
  delay(10000);

  myMotor.write(75);
  delay(10000);

  myMotor.write(80);
  delay(10000);
  
  myMotor.write(85);
  delay(10000);

  myMotor.write(90);
  delay(10000);

  myMotor.write(95);
  delay(10000);
  
  myMotor.write(100);
  delay(10000);
  
  myMotor.write(105);
  delay(10000);

  myMotor.write(110);
  delay(10000);

  myMotor.write(115);
  delay(10000);

  myMotor.write(120);
  delay(10000);

  myMotor.write(125);
  delay(10000);

  myMotor.write(130);
  delay(10000);

  myMotor.write(100);
  delay(100);
  myMotor.write(50);
  delay(100);
  myMotor.write(0);

}


void loop() {

}



  
