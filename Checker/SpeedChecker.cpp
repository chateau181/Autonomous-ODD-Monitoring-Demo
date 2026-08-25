#include "SpeedChecker.h"


SpeedChecker::SpeedChecker(
    const ODDConfig& config
)
    :
    config(config)
{

}



void SpeedChecker::check(
    const RuntimeData& runtimeData,
    ODDResult& result
)

{

    const Vehicle& vehicle =
        runtimeData.getVehicle();


    if(vehicle.getSpeed() > config.getMaxSpeed())
    {

        updateStatus(
            result.status,
            ODDStatus::Outside
        );


        result.reasons.push_back(
            "Vehicle current speed exceeds limit"
        );

    }

}