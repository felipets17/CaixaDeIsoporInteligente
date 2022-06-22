#include <Servo.h>
Servo servomotor;
const int button = 3;

void setup() {
  servomotor.attach(5);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(button));
  if (digitalRead(button) == HIGH){
    servomotor.write(170);
    delay(800);
  } else {
    servomotor.write(40);
    delay(500);
  }
  
  delay(20);
}
