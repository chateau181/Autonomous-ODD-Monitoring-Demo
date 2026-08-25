#ifndef EMERGENCYCHECKER_H
#define EMERGENCYCHECKER_H


#include "IChecker.h"


class EmergencyChecker : public IChecker
{

public:

    void check(
        const RuntimeData& runtimeData,
        ODDResult& result
    ) override;


};


#endif