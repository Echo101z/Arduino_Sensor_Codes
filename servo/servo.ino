
#include<Servo.h>
Servo se;

void setup() {
se.attach(8);
se.write(0);
delay(2000);// put your setup code here, to run once:

}

void loop() {
se.write(180);
delay(1000);
   se.write(0);
delay(1000);
                                                             // put your main code here, to run repeatedly:

}
