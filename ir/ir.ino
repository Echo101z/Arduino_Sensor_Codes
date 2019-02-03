void setup() {
pinMode(A0,INPUT);  
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(8,OUTPUT);// put your setup code here, to run once:
digitalWrite(A2,HIGH);
digitalWrite(A1,LOW);
Serial.begin(9600);
}

void loop() {
                                                                                                            // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
//delay(1000);
if(analogRead(A0)>500)
digitalWrite(8,HIGH);
else
digitalWrite(8,LOW);



}
