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
  myMotor.write(60);
  delay(30000);

  ramp_motor(myMotor,60,70);
  delay(30000);

  ramp_motor(myMotor,70,80);
  delay(30000);

  ramp_motor(myMotor,80,90);
  delay(30000);

  ramp_motor(myMotor,90,100);
  delay(30000);

  ramp_motor(myMotor,100,110);
  delay(30000);

  ramp_motor(myMotor,110,120);
  delay(30000);

  ramp_motor(myMotor,120,130);
  delay(30000);

  ramp_motor(myMotor,130,140);
  delay(30000);

  ramp_motor(myMotor,140,150);
  delay(30000);

  ramp_motor(myMotor,150,140);
  delay(30000);

  ramp_motor(myMotor,140,130);
  delay(30000);

  ramp_motor(myMotor,130,120);
  delay(30000);

  ramp_motor(myMotor,120,110);
  delay(30000);

  ramp_motor(myMotor,110,100);
  delay(30000);

  ramp_motor(myMotor,100,90);
  delay(30000);



  // TURN THE MOTOR OFF -- VERY IMPORTANT
  myMotor.write(0);

}


void loop() {

}

void ramp_motor(Servo motor,int s,int e) {
  for (int i=s; i<e+1; i++){
    motor.write(i);
    delay(13);
  }
}

