#include <FlightControlSurface.h>

class Rudder: public FlightControlSurface {
    protected:
        bool side;
    
    public:
        Rudder(Servo* servo, bool side);

        void brake();
};