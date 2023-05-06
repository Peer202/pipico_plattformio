#include <Arduino.h>

int n = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  Serial1.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  n ++;
  Serial1.print("Iteration: ");
  Serial1.println(String (n));
}