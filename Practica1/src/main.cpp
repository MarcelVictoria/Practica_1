#include <Arduino.h>

  // Pin 13 has an LED connected on most Arduino boards.
  // give it a name:
  int led = 13;

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin 13 as an output.

  //pinMode (13, OUIPUI) :

  Serial.begin (115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (led, HIGH);

  // turn the LED on (HIGH is the voltage level)

  Serial.println("ON");

  delay (500);

  digitalWrite (led, LOW);

  // wait for a second

  // turn the LED off by making the voltage LOW

  Serial.println("OFF") ;

  delay (500);

  // wait for a second
}