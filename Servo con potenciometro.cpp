#include <Servo.h>

Servo myservo;  

int potpin = 0;  
int val;  


void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);                  
  delay(10);
  int val=analogRead(A0);
   Serial.println(val);
   
   delay(10);
                             
}