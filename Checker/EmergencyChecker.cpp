#include "EmergencyChecker.h"


void EmergencyChecker::check(
    const RuntimeData& runtimeData,
    ODDResult& result
)

{

    const Vehicle& vehicle =
        runtimeData.getVehicle();


    if(vehicle.getEmergencyStatus())
    {

        updateStatus(
            result.status,
            ODDStatus::Outside
        );


        result.reasons.push_back(
            "Emergency status is active"
        );

    }

}