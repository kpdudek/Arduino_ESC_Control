// Control a brushless motor through an ESC

// The code is written to arm and control a Hobbyking BLHeli Raptor ESC
// The arming procedure will vary per ESC

// This script is a test case to play Jingle Bells using the rpm values provided by Professor Sheryl Grace


#include <Servo.h>

Servo myMotor;
int incomingString;

void setup() {
  // Put the motor to Arduino pin #9
  myMotor.attach(9);

  // Musical notes and the pwm signals that produce them
  int c = rpm_to_pwm(7860);
  int d = rpm_to_pwm(8760);
  int e = rpm_to_pwm(9840);
  int f = rpm_to_pwm(10500);
  int g = rpm_to_pwm(note_to_rpm(5));

  int bar = 1; //one measure is one second

  // Arming Procedure
  myMotor.write(0);             
  delay(5000);

  
  // Test Procedure
  play_note(myMotor,e,.25,bar);
  play_note(myMotor,e,.25,bar);
  play_note(myMotor,e,.50,bar);

  play_note(myMotor,e,.25,bar);
  play_note(myMotor,e,.25,bar);
  play_note(myMotor,e,.50,bar);

  play_note(myMotor,e,.25,bar);
  play_note(myMotor,g,.25,bar);
  play_note(myMotor,c,.25,bar);
  play_note(myMotor,d,.25,bar);
  
  play_note(myMotor,e,1.0,bar);
  

  // TURN THE MOTOR OFF -- VERY IMPORTANT
  myMotor.write(0);

}


void loop() {

}


// Functions used within runtime loop
void play_note(Servo motor, int note,int duration,int bar) {
  motor.writeMicroseconds(note);
  double pause = (1000*bar)*duration;
  delay(pause);
}


// Increase the rpm of a motor between two points
void ramp_motor(Servo motor,int s,int e) {
  for (int i=s; i<e+1; i++){
    motor.writeMicroseconds(i);
    delay(13);
  }
}


// Convert a pwm signal into the rpm that it produces
int pwm_to_rpm(int pwm) {
  int rpm;
  rpm = ceil(-.0043*pow(pwm,2) + 23.084*pwm - 14292);
  return rpm;
}


// Convert an rpm value into the pwm signal that produces it
int rpm_to_pwm(int rpm) {
  int a = -0.0043;
  int b = 23.084;
  int c = -14292-rpm;

  int discrim = sqrt(b^2 - 4*a*c);

  int b_plus = ceil((-b + discrim) / (2*a));
  int b_minus = ceil((-b - discrim) / (2*a));
  return b_plus;
}


// Convert a note value into the rpm that produces it
int note_to_rpm(int note){
  // pass the number of the note counting from c = 1
  int rpm;

  rpm = 900*note + 6990;

  return rpm;
}
















