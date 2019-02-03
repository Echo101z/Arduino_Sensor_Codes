void setup() {
 Serial.begin(9600);
 pinMode(8,OUTPUT);                             // put your setup code here, to run once:

}

void loop() {
if(Serial.available()>0)
 { char data = Serial.read();
 switch(data)
 {case 'A':  digitalWrite(8,HIGH);
             break;
  case 'D':  digitalWrite(8,LOW);
             break;

  default: break;}
  Serial.println(data);
 }
 delay(50);

  // put your main code here, to run repeatedly:

}
