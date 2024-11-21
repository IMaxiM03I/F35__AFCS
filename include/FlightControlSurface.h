#include <Arduino.h>
#include <Servo.h>

class FlightControlSurface {
    protected:
        Servo* servo;
        static const uint8_t ANGLE_CENTER = 90;
        static const uint8_t ANGLE_MAX = 180;
        static const uint8_t ANGLE_MIN = 0;
    
    public:
        /**
         * @param side: 1 = right, 0 = left
         */
        FlightControlSurface(Servo* servo);

        void init(uint8_t pin);

        void move(uint8_t percentage);

        void moveServo(uint8_t angle);

        void center();
};