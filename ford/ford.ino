//Define Pins
//Motor A
int enableA = 5;
int MotorA1 = 6;
int MotorA2 = 7;
 
//Motor B
int enableB = 8;
int MotorB1 = 9;
int MotorB2 = 10;




void setup() {
  Serial.begin (9600);
  //configure pin modes
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
  
  pinMode (enableB, OUTPUT);
  pinMode (MotorB1, OUTPUT);
  pinMode (MotorB2, OUTPUT);   // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println ("Enabling Motors");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  delay (1000);
  //do something

  Serial.println ("Motion Forward");
  digitalWrite (MotorA1, HIGH);
  digitalWrite (MotorA2, LOW);
  analogWrite (enableA,255);
  analogWrite (enableB,255);
  digitalWrite (MotorB1, HIGH);
  digitalWrite (MotorB2, LOW);
delay (1000);
}
