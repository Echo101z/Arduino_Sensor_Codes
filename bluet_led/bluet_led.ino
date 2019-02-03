int si=0;
void setup() {
 Serial.begin(9600);
 pinMode(12,OUTPUT);                             // put your setup code here, to run once:

}

void loop() {
if(Serial.available()>0)
 { char data = Serial.read();
 switch(data)
 {case 'A':  digitalWrite(12,HIGH);
             si=si+1;
             Serial.println(si);
             break;
  case 'D':  digitalWrite(12,LOW);
             break;

  default: break;}
  Serial.println(data);
 }
 delay(50);

  // put your main code here, to run repeatedly:

}
