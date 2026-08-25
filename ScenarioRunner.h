#ifndef SCENARIO_RUNNER_H
#define SCENARIO_RUNNER_H


#include "RuntimeData.h"
#include "ODDConfig.h"


void runScenario(
    const std::string& scenarioName,
    const RuntimeData& runtimeData,
    const ODDConfig& config
);


void runNormalScenario(
    const ODDConfig& config
);


void runSensorFailureScenario(
    const ODDConfig& config
);


void runSpeedViolationScenario(
    const ODDConfig& config
);


#endif