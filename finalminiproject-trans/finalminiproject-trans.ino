#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define buttonPin1 3
int buttonState1 = 0;
RF24 radio(9, 8); // CE, CSN

const byte address[6] = "00002";

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == 1)
  {
    buttonState1 = 1;
  }
  else  if (buttonState1 == 0)
  {
    buttonState1 = 0;
  }
  Serial.print(buttonState1);
  Serial.print("\t");
  radio.write(&buttonState1, sizeof(buttonState1));

}
