#include "DynamicSpeedChecker.h"


DynamicSpeedChecker::DynamicSpeedChecker(
    const ODDConfig& config
)
:
config(config)
{

}



void DynamicSpeedChecker::check(
    const RuntimeData& runtimeData,
    ODDResult& result
)

{

    for(
        double speed :
        runtimeData.getSpeedHistory()
    )
    {

        if(speed > config.getMaxSpeed())
        {

            updateStatus(
                result.status,
                ODDStatus::Outside
            );


            result.reasons.push_back(
                "Historical speed exceeded limit"
            );


            break;

        }

    }

}