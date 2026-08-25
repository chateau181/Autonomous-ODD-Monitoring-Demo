#include <iostream>

#include "ScenarioRunner.h"
#include "ODDMonitor.h"

#include "ScenarioRunner.h"

#include "Vehicle.h"
#include <vector>
#include <map>


void runScenario(
    const std::string& scenarioName,
    const RuntimeData& runtimeData,
    const ODDConfig& config
)
{

    std::cout << std::endl;
    std::cout << "===================="
              << std::endl;

    std::cout << scenarioName
              << std::endl;

    std::cout << "===================="
              << std::endl;



    ODDResult result =
        evaluateODD(
            runtimeData,
            config
        );


    std::cout
        << "ODD Assessment: "
        << statusToString(result.status)
        << std::endl;


    std::cout
        << "Reasons:"
        << std::endl;


    for(const auto& reason : result.reasons)
    {
        std::cout
            << "- "
            << reason
            << std::endl;
    }

}



void runNormalScenario(
    const ODDConfig& config
)
{

    Vehicle vehicle(
        "APTS",
        20,
        1,
        false
    );


    std::map<std::string,std::string> sensors;

    sensors["front_camera"]="OK";
    sensors["lidar"]="OK";
    sensors["gps"]="OK";
    sensors["imu"]="OK";


    std::vector<double> history;

    history.push_back(20);
    history.push_back(22);
    history.push_back(25);



    RuntimeData data(
        vehicle,
        sensors,
        history
    );


    runScenario(
        "Scenario 1: Normal Operation",
        data,
        config
    );

}



void runSensorFailureScenario(
    const ODDConfig& config
)
{

    Vehicle vehicle(
        "APTS",
        20,
        1,
        false
    );


    std::map<std::string,std::string> sensors;


    sensors["front_camera"]="OK";
    sensors["lidar"]="OK";
    sensors["gps"]="ERROR";
    sensors["imu"]="OK";


    std::vector<double> history;

    history.push_back(20);
    history.push_back(22);



    RuntimeData data(
        vehicle,
        sensors,
        history
    );


    runScenario(
        "Scenario 2: Sensor Failure",
        data,
        config
    );

}



void runSpeedViolationScenario(
    const ODDConfig& config
)
{

    Vehicle vehicle(
        "APTS",
        25,
        1,
        false
    );


    std::map<std::string,std::string> sensors;


    sensors["front_camera"]="OK";
    sensors["lidar"]="OK";
    sensors["gps"]="OK";
    sensors["imu"]="OK";


    std::vector<double> history;


    history.push_back(20);
    history.push_back(22);
    history.push_back(35);
    history.push_back(25);



    RuntimeData data(
        vehicle,
        sensors,
        history
    );


    runScenario(
        "Scenario 3: Dynamic Speed Violation",
        data,
        config
    );

}