int potPen = A0;
int readValue;
float Voltage;

void setup() {
  // put your setup code here, to run once:

  pinMode(potPen, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  readValue = analogRead(potPen);
  Voltage = (5./1023.)*readValue;
  
  Serial.print(Voltage);
  Serial.println(" Volt");
  
  delay(250);
}
