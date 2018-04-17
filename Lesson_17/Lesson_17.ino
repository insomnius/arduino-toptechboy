
int trigPin=13; //Sensor Trip pin connected to Arduino pin 13
int echoPin=11;  //Sensor Echo pin connected to Arduino pin 11
float pingTime;
float speedOfSound;
int targetDistance=3; //Distance to Target in inches
int looping = 0;
float average = 0;
float total = 0;

void setup() {
  // put your setup code here, to run once:

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(looping%30 == 0)
  {
    average   = total / looping;
    Serial.println(average); 
  }
  
  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(10); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent

  pingTime = pulseIn(echoPin, HIGH);  //pingTime is presented in microceconds


  speedOfSound = (targetDistance*2)/pingTime*(1000000)*3600/63360; //converts to miles per hour

  // Average speed of sound
  // 593.64
  
  total = total + speedOfSound;
  
  Serial.print("Time taken for the pulse to travel:  ");
  Serial.print(pingTime);
  Serial.println(" microseconds");
  
  Serial.print("The Speed of Sound is: ");
  Serial.print(speedOfSound);
  Serial.println(" miles per hour");
  delay(1000);

  looping++;
}
