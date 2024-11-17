#include <Arduino.h>
#include <Servo.h>

class FlightControlSurface {
    protected:
        Servo* servo;
    
    public:
        FlightControlSurface(Servo* servo);

        void init(int pin);

        void move(int angle);

        void center();
};