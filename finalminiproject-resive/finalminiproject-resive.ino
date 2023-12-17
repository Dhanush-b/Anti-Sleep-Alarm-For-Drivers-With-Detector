#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define led1 A1
int GAS= A0;
int buzz=3;
float value;
int relay=4;//alcohol
int relay1=5;//eye 

int buttonState = 0;

RF24 radio(9, 8); // CE, CSN
const byte address[6] = "00002";

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(GAS, INPUT);
  pinMode(relay,OUTPUT);
  digitalWrite(buzz,HIGH);
 digitalWrite(relay1,HIGH);
  pinMode(buzz,OUTPUT);
  pinMode(relay1,OUTPUT);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
}
void loop() {
  radio.startListening();
  while (!radio.available());
  radio.read(&buttonState, sizeof(buttonState));
  Serial.println(buttonState);
  value=analogRead(A0);

  if (buttonState == 1) {
  delayMicroseconds(10);
    digitalWrite(led1, LOW);
     digitalWrite(buzz,HIGH);
    
  }
  else  if (buttonState == 0) {
     
    digitalWrite(led1, HIGH);
    
  }
  if(value>200)
  {
    digitalWrite(buzz,HIGH);
    digitalWrite(relay,HIGH);
    
  }
  else if (buttonState == 1) {
    delay(1000);
    digitalWrite(relay1,HIGH);
  }
  else  if (buttonState == 0) {
    delay(100);
    digitalWrite(relay1,LOW);
  }
  else if (value<600)
  {
    digitalWrite(buzz,LOW);
    digitalWrite(relay,LOW);
  }
  Serial.print(value);
}
