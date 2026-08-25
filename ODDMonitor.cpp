#include "ODDMonitor.h"

#include "Checker/SpeedChecker.h"
#include "Checker/SensorChecker.h"
#include "Checker/EmergencyChecker.h"
#include "Checker/DynamicSpeedChecker.h"

#include "Checker/CheckerManager.h"


std::string statusToString(ODDStatus status)
{

    switch(status)
    {

        case ODDStatus::Inside:
            return "Inside ODD";


        case ODDStatus::Outside:
            return "Outside ODD";


        case ODDStatus::Unclear:
            return "Unclear";

    }


    return "Unknown";
}

void updateStatus(
    ODDStatus& currentStatus,
    ODDStatus newStatus
)
{
    if(newStatus == ODDStatus::Outside)
    {
        currentStatus = ODDStatus::Outside;
    }

    else if(
        newStatus == ODDStatus::Unclear &&
        currentStatus == ODDStatus::Inside
    )
    {
        currentStatus = ODDStatus::Unclear;
    }
}


ODDResult evaluateODD(
    const RuntimeData& runtimeData,
    const ODDConfig& config
)
{ODDResult result;

result.status = ODDStatus::Inside;


SpeedChecker speedChecker(config);

SensorChecker sensorChecker;

EmergencyChecker emergencyChecker;

DynamicSpeedChecker dynamicSpeedChecker(config);



CheckerManager manager;


manager.addChecker(
    &speedChecker
);


manager.addChecker(
    &sensorChecker
);


manager.addChecker(
    &emergencyChecker
);


manager.addChecker(
    &dynamicSpeedChecker
);



manager.runChecks(
    runtimeData,
    result
);


return result;
}