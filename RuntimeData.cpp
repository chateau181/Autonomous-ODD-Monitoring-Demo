#include "RuntimeData.h"


RuntimeData::RuntimeData(
    Vehicle vehicle,
    std::map<std::string,std::string> sensors,
    std::vector<double> history
)
:
vehicle(vehicle),
sensorStatus(sensors),
speedHistory(history)
{

}


const Vehicle& RuntimeData::getVehicle() const
{
    return vehicle;
}


const std::map<std::string,std::string>& 
RuntimeData::getSensorStatus() const
{
    return sensorStatus;
}


const std::vector<double>&
RuntimeData::getSpeedHistory() const
{
    return speedHistory;
}