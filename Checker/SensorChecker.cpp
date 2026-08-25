#include "SensorChecker.h"


void SensorChecker::check(
    const RuntimeData& runtimeData,
    ODDResult& result
)
{

    for(
        const auto& sensor :
        runtimeData.getSensorStatus()
    )
    {

        if(sensor.second == "ERROR")
        {

            updateStatus(
                result.status,
                ODDStatus::Unclear
            );


            result.reasons.push_back(
                "Sensor failure: "
                + sensor.first
            );

        }

    }

}