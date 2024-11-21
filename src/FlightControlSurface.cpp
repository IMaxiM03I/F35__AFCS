#include <FlightControlSurface.h>

FlightControlSurface::FlightControlSurface(Servo* servo, bool side) {
    this->servo = servo;

    // servos on the right and left of the plane are facing opposite ways
    this->ANGLE_MAX = 180 - side * 180;
    this->ANGLE_MIN = side * 180;
}

void FlightControlSurface::init(uint8_t pin) {
    this->servo->attach(pin);
}

void FlightControlSurface::move(uint8_t angle) {
    if (angle <= 180) servo->write(angle);
    delay(15);
}

void FlightControlSurface::center() {
    move(90);
}