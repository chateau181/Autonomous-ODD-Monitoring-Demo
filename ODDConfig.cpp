#include "ODDConfig.h"


ODDConfig::ODDConfig(double speed)
    :
    maxSpeed(speed)
{

}


double ODDConfig::getMaxSpeed() const
{
    return maxSpeed;
}