#include "define.h"

void setup() {
  pinMode(PIN_SOLENOID1, OUTPUT);
  pinMode(PIN_SOLENOID2, OUTPUT);
  pinMode(PIN_SOLENOID3, OUTPUT);
  pinMode(PIN_SOLENOID4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  solOn(PIN_SOLENOID1);
  solOn(PIN_SOLENOID2);
  solOn(PIN_SOLENOID3);
  solOn(PIN_SOLENOID4);
}

void solOn(int pinNo) {
  Serial.print(pinNo);
  Serial.println(" HIGH");

  digitalWrite(pinNo, HIGH);
  delay(1000);
  digitalWrite(pinNo, LOW);

  Serial.print(pinNo);
  Serial.println(" LOW");
  delay(1000);
}
