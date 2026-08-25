#ifndef RUNTIMEDATA_H
#define RUNTIMEDATA_H


#include <map>
#include <string>
#include <vector>

#include "Vehicle.h"


class RuntimeData
{

private:

    Vehicle vehicle;

    std::map<std::string,std::string> sensorStatus;

    std::vector<double> speedHistory;


public:

    RuntimeData(
        Vehicle vehicle,
        std::map<std::string,std::string> sensors,
        std::vector<double> history
    );


    const Vehicle& getVehicle() const;


    const std::map<std::string,std::string>& 
    getSensorStatus() const;


    const std::vector<double>&
    getSpeedHistory() const;


};


#endif