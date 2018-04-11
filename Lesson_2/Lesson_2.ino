
int redLed = 9;
int onTime = 500;
int offTime = 1000;

void setup() {
  // put your setup code here, to run once:

  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(onTime);
  digitalWrite(redLed, HIGH);
  delay(onTime);
  digitalWrite(redLed, LOW);
}
