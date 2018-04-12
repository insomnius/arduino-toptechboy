
int trigPin=13; //Sensor Trip pin connected to Arduino pin 13
int echoPin=11;  //Sensor Echo pin connected to Arduino pin 11
float pingTime;
float speedOfSound;
int targetDistance=4; //Distance to Target in inches

void setup() {
  // put your setup code here, to run once:

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW); //Set trigger pin low
  delayMicroseconds(2000); //Let signal settle
  digitalWrite(trigPin, HIGH); //Set trigPin high
  delayMicroseconds(10); //Delay in high state
  digitalWrite(trigPin, LOW); //ping has now been sent

  pingTime = pulseIn(echoPin, HIGH);  //pingTime is presented in microceconds


  speedOfSound = (targetDistance*2)/pingTime*(1000000)*3600/63360;        //converts to miles per hour
  Serial.print("The Speed of Sound is: ");
  Serial.print(speedOfSound);
  Serial.println(" miles per hour");
  delay(1000);
}
