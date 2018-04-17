#include <Servo.h>
int pos = 0;    // variable to store the servo position 
int servoPin= 9;
int servoDelay=25;
Servo myPointer;
 
 
void setup() 
{ 
  Serial.begin(9600);
  myPointer.attach(servoPin);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() {
 
for (pos=15; pos<=170; pos=pos+1) {
  Serial.println(pos);
  myPointer.write(pos);
  delay(servoDelay);
  
}
 
for (pos=170; pos>=15; pos=pos-1) {
  Serial.println(pos);
  myPointer.write(pos);
  delay(servoDelay);
}
}
