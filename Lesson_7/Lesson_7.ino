int redLEDPin=9; //Declare redLEDPin an int, and set to pin 9 
int yellowLEDPin=10; //Declare yellowLEDPin an int, and set to pin 10 
int redOnTime=250; //Declare redOnTime an int, and set to 250 mseconds 
int redOffTime=250; //Declare redOffTime an int, and set to 250 
int yellowOnTime=250; //Declare yellowOnTime an int, and set to 250
int yellowOffTime=250; //Declare yellowOffTime an int, and set to 250
int numYellowBlinks=0; //Number of times to blink yellow LED
int numRedBlinks=0;  //Number of times to blink red LED
String redText="Red light start to blink..";
String yellowText="Yellow light start to blink..";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDPin, OUTPUT);  // Tell Arduino that redLEDPin is an output pin
  pinMode(yellowLEDPin, OUTPUT);  //Tell Arduino that yellowLEDPin is an output pin

  Serial.begin(9600);
  
  Serial.println("How Many Times Do You Want the Red LED to blink?"); //Prompt User for Input
  while(Serial.available()==0) { // Wait for User to Input Data  
  }
  numRedBlinks=Serial.parseInt();  //Read the data the user has input
  Serial.println(numRedBlinks);
  
  Serial.println("How Many Times Do You Want the Yellow LED to blink?"); //Prompt User for Input
  while(Serial.available()==0) { // Wait for User to Input Data  
  }
  numYellowBlinks=Serial.parseInt();  //Read the data the user has input
  Serial.println(numYellowBlinks);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  Serial.println("");
  
  Serial.println(redText);
  int j = 0;
  while(j<numRedBlinks) {
      Serial.print("You are blinking at:");
      Serial.println(j);
      
      digitalWrite(redLEDPin,HIGH); //Turn red LED on
      delay(redOnTime);             //Leave on for redOnTime
      digitalWrite(redLEDPin,LOW);  //Turn red LED off
      delay(redOffTime);            //Leave off for redOffTime
      j++;
  }
  
  Serial.println("");

  Serial.println(yellowText);
  
  j = 0;
  while(j<numYellowBlinks) {
      Serial.print("You are blinking at:");
      Serial.println(j);
      
      digitalWrite(yellowLEDPin,HIGH); //Turn yellow LED on
      delay(yellowOnTime);             //Leave on for yellowOnTime
      digitalWrite(yellowLEDPin,LOW);  //Turn yellow LED off
      delay(yellowOffTime);            //Leave off for yellowOffTime
      j++;
  }
  
}
