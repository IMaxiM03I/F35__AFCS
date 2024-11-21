#include <Arduino.h>
#include <Servo.h>

class FlightControlSurface {
    protected:
        Servo* servo;
        static const uint8_t ANGLE_CENTER = 90; // this value is always the same, regardless of where the servo is
        uint8_t ANGLE_MAX;
        uint8_t ANGLE_MIN;
    
    public:
        /**
         * @param side: 1 = right, 0 = left
         */
        FlightControlSurface(Servo* servo, bool side);

        void init(uint8_t pin);

        void move(uint8_t angle);

        void center();
};