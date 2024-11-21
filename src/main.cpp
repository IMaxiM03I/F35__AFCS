#include <Arduino.h>
#include <FlightControlSurface.h>

// servos
Servo FLAP_LEFT_SERVO;
Servo FLAP_RIGHT_SERVO;

Servo RUDDER_LEFT_SERVO;
Servo RUDDER_RIGHT_SERVO;

Servo ELEVATOR_LEFT_SERVO;
Servo ELEVATOR_RIGHT_SERVO;

// flight control surfaces
FlightControlSurface flap_left = FlightControlSurface(&FLAP_LEFT_SERVO, 0);
FlightControlSurface flap_right = FlightControlSurface(&FLAP_RIGHT_SERVO, 1);

FlightControlSurface rudder_left = FlightControlSurface(&RUDDER_LEFT_SERVO, 0);
FlightControlSurface rudder_right = FlightControlSurface(&RUDDER_RIGHT_SERVO, 1);

FlightControlSurface elevator_left = FlightControlSurface(&ELEVATOR_LEFT_SERVO, 0);
FlightControlSurface elevator_right = FlightControlSurface(&ELEVATOR_RIGHT_SERVO, 1);

void setup() {
  // attach servos
  flap_left.init(3);
  flap_right.init(5);

  rudder_left.init(6);
  rudder_right.init(9);

  elevator_left.init(10);
  elevator_right.init(11);
}

void loop() {
  rudder_right.center();
  delay(2000);
  rudder_right.move(180);
  delay(500);
}