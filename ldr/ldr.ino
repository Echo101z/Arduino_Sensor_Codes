const int led=8;
const int ldr=A0;


void setup() { 
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);                             // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrstat=analogRead(ldr);
if(ldrstat<=200)
{digitalWrite(led,HIGH);
Serial.println("ldr dark led on");
}
else
{digitalWrite(led,LOW);
Serial.println("_______________________");
}




}
