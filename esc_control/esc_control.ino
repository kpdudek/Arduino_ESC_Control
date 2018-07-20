// Control a brushless motor through an ESC

// Open the arduino serial port and enter a number between 0-180
// Arming the esc differs for every brand. Try combinations of 0-->180 to arm the motor


#include <Servo.h>

Servo myMotor;
int incomingString;

void setup() {
  // Put the motor to Arduino pin #3
  myMotor.attach(9);

  // Required for I/O from Serial monitor
  Serial.begin(9600);
  // Print a startup message
  Serial.println("initializing...");
}

void loop() {
  // If there is incoming value
  if(Serial.available() > 0) {
    
    incomingString = Serial.parseInt(); 
  
    // print the integer
    Serial.print("Printing the value: ");
    Serial.println(incomingString);

    
    if (incomingString > -1 && incomingString < 181) {
      
     Serial.println("Value is between 0 and 180");
     myMotor.write(incomingString);
    }
   
   else {
     Serial.println("Value is NOT between 0 and 180");
     Serial.println("Error with the input");
   }
  
    // Reset the value of the incomingString
    incomingString = "";
  }
}


  
