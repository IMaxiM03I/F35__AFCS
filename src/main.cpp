#include <Arduino.h>

#include <FlightControlSurface.h>
#include <Flap.h>
#include <Rudder.h>

// servos
Servo FLAP_LEFT_SERVO;
Servo FLAP_RIGHT_SERVO;

Servo RUDDER_LEFT_SERVO;
Servo RUDDER_RIGHT_SERVO;

Servo ELEVATOR_LEFT_SERVO;
Servo ELEVATOR_RIGHT_SERVO;

// flight control surfaces
FlightControlSurface flap_left = Flap(&FLAP_LEFT_SERVO, 0);
FlightControlSurface flap_right = Flap(&FLAP_RIGHT_SERVO, 1);

FlightControlSurface rudder_left = Rudder(&RUDDER_LEFT_SERVO, 0);
FlightControlSurface rudder_right = Rudder(&RUDDER_RIGHT_SERVO, 1);

FlightControlSurface elevator_left = FlightControlSurface(&ELEVATOR_LEFT_SERVO);
FlightControlSurface elevator_right = FlightControlSurface(&ELEVATOR_RIGHT_SERVO);

// joystick values
uint16_t jstick_x = 512;  // initialize to center value
uint16_t jstick_y = 512;

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
  // map joystick values to [0-100] range (2 decimals precision)
  map(jstick_x, 0, 1023, 0, 100);
  map(jstick_y, 0, 1023, 0, 100);

  // actuate roll
  flap_left.move(jstick_x);
  flap_right.move(jstick_x);

  // actuate yaw

  // actuate pitch
  elevator_left.move(jstick_y);
  elevator_right.move(jstick_y);
}