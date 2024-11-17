#include <FlightControlSurface.h>

FlightControlSurface::FlightControlSurface(Servo* servo) {
    this->servo = servo;
}

void FlightControlSurface::init(int pin) {
    this->servo->attach(pin);
}

void FlightControlSurface::move(int angle) {
    if (angle >= 0 && angle <= 180) servo->write(angle);
    delay(15);
}

void FlightControlSurface::center() {
    move(90);
}