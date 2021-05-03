/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/


const int ldrPin = A0;
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;
const int led5 = 9;


void setup() {
  
Serial.begin(9600);
  
pinMode(ldrPin,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);


}

void loop() {
  
  int ldrStatus = analogRead(ldrPin);
  
  if (ldrStatus >=300) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);//turn LED on
    Serial.println("LDR is DARK, LED is ON");
   }
  else {
    digitalWrite(led1, LOW);  
    digitalWrite(led2, LOW); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, LOW); 
    digitalWrite(led5, LOW);//turn LED off
    Serial.println("---------------");
  }

}
