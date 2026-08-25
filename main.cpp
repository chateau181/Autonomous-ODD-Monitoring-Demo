#include <iostream>
#include <vector>
#include <map>

#include "Vehicle.h"
#include "ODDMonitor.h"
#include "ODDConfig.h"
#include "RuntimeData.h"

#include "ScenarioRunner.h"
#include "ODDConfig.h"


int main(){

ODDConfig config(30);


    runNormalScenario(config);


    runSensorFailureScenario(config);


    runSpeedViolationScenario(config);



    return 0;
}