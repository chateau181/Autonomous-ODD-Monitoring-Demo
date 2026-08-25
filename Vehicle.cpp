#include "Vehicle.h"


Vehicle::Vehicle(
    std::string vehicleName,
    double vehicleSpeed,
    int passengers,
    bool emergency
)
    :
    name(vehicleName),
    speed(vehicleSpeed),
    passengerNumber(passengers),
    emergencyStatus(emergency)
{

}



std::string Vehicle::getName() const
{
    return name;
}



double Vehicle::getSpeed() const
{
    return speed;
}



int Vehicle::getPassengerNumber() const
{
    return passengerNumber;
}



bool Vehicle::getEmergencyStatus() const
{
    return emergencyStatus;
}