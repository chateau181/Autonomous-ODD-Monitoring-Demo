#ifndef CHECKERMANAGER_H
#define CHECKERMANAGER_H


#include <vector>
#include "IChecker.h"


class CheckerManager
{

private:

    std::vector<IChecker*> checkers;


public:


    void addChecker(
        IChecker* checker
    );


    void runChecks(
        const RuntimeData& runtimeData,
        ODDResult& result
    );


};


#endif