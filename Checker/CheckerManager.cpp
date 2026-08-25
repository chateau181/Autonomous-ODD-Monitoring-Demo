#include "CheckerManager.h"



void CheckerManager::addChecker(
    IChecker* checker
)
{
    checkers.push_back(checker);
}



void CheckerManager::runChecks(
    const RuntimeData& runtimeData,
    ODDResult& result
)
{

    for(auto checker : checkers)
    {

        checker->check(
            runtimeData,
            result
        );

    }

}