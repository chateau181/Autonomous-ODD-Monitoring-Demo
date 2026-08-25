#ifndef SENSORCHECKER_H
#define SENSORCHECKER_H


#include "IChecker.h"


class SensorChecker : public IChecker
{

public:

    void check(
        const RuntimeData& runtimeData,
        ODDResult& result
    ) override;


};


#endif