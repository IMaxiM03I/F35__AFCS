#include <Flap.h>

Flap::Flap(Servo* servo, bool side) : FlightControlSurface(servo) {
    this->side = side;
}

void Flap::move(uint8_t percentage) {
    uint8_t angle = percentage;
    map(angle, 0, 100, 180 - side * ANGLE_MAX, side * ANGLE_MIN);
    FlightControlSurface::moveServo(angle);
}