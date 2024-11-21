#include <FlightControlSurface.h>

class Flap: public FlightControlSurface {
    private:
        bool side;
    public:
        Flap(Servo* servo, bool side);
        void move(uint8_t percentage);
};