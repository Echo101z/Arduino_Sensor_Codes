//Define Pins
//Motor A
int enableA = 5;
int MotorA1 = 6;
int MotorA2 = 7;
const int trig=4;
const int echo=2;
 
//Motor B
int enableB = 8;
int MotorB1 = 9;
int MotorB2 = 10;
long duration;
int distance;



void setup() {
 
  //configure pin modes
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
  pinMode (trig,OUTPUT);
  pinMode (echo,INPUT);
  pinMode (enableB, OUTPUT);
  pinMode (MotorB1, OUTPUT);
  pinMode (MotorB2, OUTPUT);   // put your setup code here, to run once:
   Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(2);

  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2;
  
 Serial.print("Distance:");
 Serial.println(distance);
}
 
  
  
/*  Serial.println ("Enabling Motors");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  delay (1000);
  //do something

 right();
 
 
 */
 

 
 
 
 
 
 
 void left()
 {
  Serial.println ("Motion left");
  digitalWrite (MotorA1, HIGH);
  digitalWrite (MotorA2, LOW);

  digitalWrite (MotorB1, HIGH);
  digitalWrite (MotorB2, LOW);
  delay (7000);
}



void backward()
  {Serial.println ("Motion backward");
  digitalWrite (MotorA1, HIGH);
  digitalWrite (MotorA2, LOW);

  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
delay (7000);
}


  
  
  void fordward(){ 
 Serial.println ("Motion Forward");
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);

  digitalWrite (MotorB1, HIGH);
  digitalWrite (MotorB2, LOW);
delay (7000);

}



void right(){
Serial.println ("Motion right");
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);

  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
delay (7000);
  
}
