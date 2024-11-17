#include <Arduino.h>

#include <FlightControlSurface.h>

Servo servo_test;
FlightControlSurface fcs_test = FlightControlSurface(&servo_test);

void setup() {
  fcs_test.init(9);
}

void loop() {
  fcs_test.center();
  delay(2000);
  fcs_test.move(180);
  delay(2000);
}