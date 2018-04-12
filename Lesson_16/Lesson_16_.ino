#include <Servo.h>  //Load the servo Library
int pos = 0;    // variable to store the servo position 
int servoPin= 9; //Servo is hooked to pin 9
int servoDelay=25; // 25 millisecond delay after each servo write
 
Servo myPointer;  //Create your servo object. I call mine 'myPointer'
 
 
void setup() 
{ 
  Serial.begin(9600);
  myPointer.attach(servoPin);  // attaches the servo myPointer to pin servoPin, which should be pin 9 
} 
 
 
void loop() {
 
Serial.println("Where would you like the Servo?"); //prompt user for position
while (Serial.available()==0) { //wait for user input
}
 
pos=Serial.parseInt(); //read user input into pos
 
{ 
myPointer.write(pos); //set servo position to pos
    delay(servoDelay);                       // waits 15ms for the servo to reach the position 
  } 
}
