#include <Rudder.h>

Rudder::Rudder(Servo* servo, bool side) : FlightControlSurface(servo) {
    this->side = side;
}

void Rudder::brake() {
    moveServo(this->side ? this->ANGLE_MIN : this->ANGLE_MAX);  // brake by pulling the rudders towards each other
}