#include <Servo.h>

Servo s1;

void setup() {
  s1.attach(4);
}

void loop() {
  s1.write(0);    // left rotation
  delay(100);

  s1.write(95);   // stop
  delay(100);

  s1.write(180);  // right rotation
  delay(100);

  s1.write(95);   // stop
  delay(100);
}