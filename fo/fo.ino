int enableA = 5;
int MotorA1 = 6;
int MotorA2 = 7;
//const int trig=4;
//const int echo=2;
 
//Motor B
int enableB = 8;
int MotorB1 = 9;
int MotorB2 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
  //pinMode (trig,OUTPUT);
  //pinMode (echo,INPUT);
  pinMode (enableB, OUTPUT);
  pinMode (MotorB1, OUTPUT);
  pinMode (MotorB2, OUTPUT);   // put your setup code here, to run once:
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println ("Enabling Motors");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  Serial.println ("Motion Forward");
  digitalWrite (MotorA1, HIGH);
  digitalWrite (MotorA2, LOW);
  //analogWrite (enableA,500);
  //analogWrite (enableB,500);
  digitalWrite (MotorB1,HIGH);
  digitalWrite (MotorB2, LOW);
  delay (1000);

  
}
