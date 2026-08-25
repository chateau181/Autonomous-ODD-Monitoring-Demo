#ifndef ODDMONITOR_H
#define ODDMONITOR_H

#include <string>
#include <vector>
#include <map>

#include "Vehicle.h"
#include "ODDConfig.h"
#include "RuntimeData.h"

enum class ODDStatus {
    Inside,
    Outside,
    Unclear
};


std::string statusToString(ODDStatus status);

void updateStatus(
    ODDStatus& currentStatus,
    ODDStatus newStatus
);

struct ODDResult
{
    ODDStatus status;
    std::vector<std::string> reasons;
};


void checkCurrentSpeed(
    const Vehicle& vehicle,
    const ODDConfig& config,
    ODDResult& result
);

void checkSensorHealth(
    const std::map<std::string,std::string>& sensorStatus,
    ODDResult& result
);

void checkDynamicSpeed(
    const std::vector<double>& speedHistory,
    const ODDConfig& config,
    ODDResult& result
);

void checkEmergencyStatus(
    const Vehicle& vehicle,
    ODDResult& result
);



ODDResult evaluateODD(
    const RuntimeData& runtimeData,
    const ODDConfig& config
);



#endif