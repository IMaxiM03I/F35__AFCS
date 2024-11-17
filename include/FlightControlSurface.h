#include <Arduino.h>
#include <Servo.h>

class FlightControlSurface {
    protected:
        Servo* servo;
    
    public:
        FlightControlSurface(Servo* servo);

        void init(uint8_t pin);

        void move(uint8_t angle);

        void center();
};