int redLEDPin=9; //Declare redLEDPin an int, and set to pin 9 
int yellowLEDPin=10; //Declare yellowLEDPin an int, and set to pin 10 
int redOnTime=250; //Declare redOnTime an int, and set to 250 mseconds 
int redOffTime=250; //Declare redOffTime an int, and set to 250 
int yellowOnTime=250; //Declare yellowOnTime an int, and set to 250
int yellowOffTime=250; //Declare yellowOffTime an int, and set to 250
int numYellowBlinks=3; //Number of times to blink yellow LED
int numRedBlinks=5;  //Number of times to blink red LED

void setup() {
  // put your setup code here, to run once:
  pinMode(redLEDPin, OUTPUT);  // Tell Arduino that redLEDPin is an output pin
  pinMode(yellowLEDPin, OUTPUT);  //Tell Arduino that yellowLEDPin is an output pin

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("");
  
  Serial.println("Red light start to blink...");
  for (int j=1; j<=numRedBlinks; j=j+1) {     // Start our for loop
      Serial.print("You are blinking at:");
      Serial.println(j);
      
      digitalWrite(redLEDPin,HIGH); //Turn red LED on
      delay(redOnTime);             //Leave on for redOnTime
      digitalWrite(redLEDPin,LOW);  //Turn red LED off
      delay(redOffTime);            //Leave off for redOffTime
  }
  
  Serial.println("");

  Serial.println("Yellow light start to blink...");
  for (int j=1; j<=numYellowBlinks; j=j+1) {     // Start our for loop
      Serial.print("You are blinking at:");
      Serial.println(j);
      
      digitalWrite(yellowLEDPin,HIGH); //Turn yellow LED on
      delay(yellowOnTime);             //Leave on for yellowOnTime
      digitalWrite(yellowLEDPin,LOW);  //Turn yellow LED off
      delay(yellowOffTime);            //Leave off for yellowOffTime
  }
  
}
