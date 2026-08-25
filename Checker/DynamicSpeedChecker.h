#ifndef DYNAMICSPEEDCHECKER_H
#define DYNAMICSPEEDCHECKER_H


#include "IChecker.h"
#include "../ODDConfig.h"


class DynamicSpeedChecker : public IChecker
{

private:

    const ODDConfig& config;


public:

    DynamicSpeedChecker(
        const ODDConfig& config
    );


    void check(
        const RuntimeData& runtimeData,
        ODDResult& result
    ) override;


};


#endif