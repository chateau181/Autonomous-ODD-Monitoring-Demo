#ifndef SPEEDCHECKER_H
#define SPEEDCHECKER_H


#include "IChecker.h"
#include "../ODDConfig.h"


class SpeedChecker : public IChecker
{

private:

    const ODDConfig& config;


public:

    SpeedChecker(
        const ODDConfig& config
    );


    void check(
        const RuntimeData& runtimeData,
        ODDResult& result
    ) override;


};


#endif