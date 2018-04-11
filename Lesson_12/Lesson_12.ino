String myName;   //Declare a String variable to hold your name
int age;         //Declare an Int variable to hold your age
float height;    //Declare a float variable to hold your height
 
void setup() {
  Serial.begin(9600);      // turn on Serial Port
}
 
void loop() {
  
  Serial.println("Please enter your name: "); //Prompt User for input
  while (Serial.available()==0) {             //Wait for user input
  
  }
  myName=Serial.readString();                 //Read user input into myName
  
  Serial.println("How old are you? ");        //Prompt User for input
  while (Serial.available()==0)  {
  
  }
  age=Serial.parseInt();                      //Read user input into age
  
  Serial.println("How tall are you? ");      //Prompt User for input
  while (Serial.available()==0)  {
  
  }
  height=Serial.parseFloat();                //Read user input into height
  
  Serial.print("Hello ");                    //Print out nicely formatted output.
  Serial.print(myName);
  Serial.print(", you are ");
  Serial.print(age);
  Serial.println(" years old,");
  Serial.print("and you are ");
  Serial.print(height);
  Serial.println(" feet tall.");
  Serial.println("");
 
}
