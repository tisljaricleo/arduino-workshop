#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9);
}

void loop() {
  motor.write(0);
  delay(1000);
  motor.write(85);
  delay(1000);
}
