#ifndef ICHECKER_H
#define ICHECKER_H


#include "../RuntimeData.h"
#include "../ODDMonitor.h"


class IChecker
{

public:

    virtual void check(
        const RuntimeData& runtimeData,
        ODDResult& result
    ) = 0;


    virtual ~IChecker() {}

};


#endif