cmake_minimum_required(VERSION 3.16)

project(ODDMonitor)


set(CMAKE_CXX_STANDARD 17)


include_directories(
    .
    Checker
)


add_executable(
    ODDMonitor

    main.cpp

    ScenarioRunner.cpp

    Vehicle.cpp
    RuntimeData.cpp
    ODDConfig.cpp
    ODDMonitor.cpp

    Checker/CheckerManager.cpp
    Checker/SpeedChecker.cpp
    Checker/SensorChecker.cpp
    Checker/EmergencyChecker.cpp
    Checker/DynamicSpeedChecker.cpp
)