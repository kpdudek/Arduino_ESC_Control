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
  delay(500);
  
  myMotor.write(90);
  delay(300000);
  
  myMotor.write(0);

}


void loop() {

}


void ramp_up(int rpm1,int rpm2, int pts) {
  int diff = rpm2 - rpm1;
  int inc = diff / pts;
  int val = rpm1;
  for (int i=1;i<pts;i++){
    val = val + inc;
    myMotor.write(val);
    delay(100);
  }
  
}

