#include <FlightControlSurface.h>

FlightControlSurface::FlightControlSurface(Servo* servo) {
    this->servo = servo;
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