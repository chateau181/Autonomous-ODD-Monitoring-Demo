#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>


class Vehicle {

private:

    std::string name;
    double speed;
    int passengerNumber;
    bool emergencyStatus;


public:

    Vehicle(
        std::string vehicleName,
        double vehicleSpeed,
        int passengers,
        bool emergency
    );


    std::string getName() const;

    double getSpeed() const;

    int getPassengerNumber() const;

    bool getEmergencyStatus() const;

};


#endif