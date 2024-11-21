#include <FlightControlSurface.h>

FlightControlSurface::FlightControlSurface(Servo* servo) {
    this->servo = servo;
}

void FlightControlSurface::init(uint8_t pin) {
    this->servo->attach(pin);
}

void FlightControlSurface::move(uint8_t percentage) {
    uint8_t angle = percentage;
    map(angle, 0, 100, 0, 180);
    moveServo(angle);
}

void FlightControlSurface::moveServo(uint8_t angle) {
    servo->write(angle);
    delay(15);
}

void FlightControlSurface::center() {
    moveServo(90);
}