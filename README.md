# Autonomous ODD Monitoring Demo

A C++ prototype for runtime ODD monitoring in autonomous transport systems.

This project demonstrates a modular monitoring architecture that evaluates runtime vehicle data through independent condition checkers and provides ODD assessment results:

- Inside ODD
- Outside ODD
- Unclear

This project implements a lightweight C++ prototype for monitoring the Operational Design Domain (ODD) conditions of an autonomous transport system.

The system evaluates runtime vehicle data and determines whether the current operating condition is:

- Inside ODD
- Outside ODD
- Unclear


The prototype demonstrates a modular monitoring architecture commonly used in autonomous driving and robotic systems.

## Features

- Modular C++ architecture with separated monitoring components
- Runtime vehicle data abstraction
- ODD condition evaluation through independent checkers
- Multiple monitoring conditions:
  - Speed limitation checking
  - Sensor availability checking
  - Emergency status monitoring
  - Dynamic speed history validation

- Scenario-based testing:
  - Normal operation
  - Sensor failure
  - Dynamic speed violation

## Architecture

The monitoring system follows a modular evaluation pipeline:

```text
Runtime Data
      |
      v
+----------------+
|  ODD Monitor   |
+----------------+
      |
      |
 ------------------------------
 |             |              |
 v             v              v

Speed       Sensor       Emergency
Checker     Checker      Checker

      |
      v

ODD Assessment
(Inside / Outside / Unclear)
```

The architecture separates runtime data processing, condition checking,
and ODD assessment into independent modules.

## Scenario Demonstration

The prototype was evaluated using multiple runtime scenarios to demonstrate
different ODD monitoring conditions.

### Scenario 1: Normal Operation

**Description:**

- Vehicle operates within configured ODD conditions.
- All monitored conditions satisfy the defined requirements.

**Expected result:**

```text
ODD Assessment: Inside ODD
```

---

### Scenario 2: Sensor Failure

**Description:**

- A sensor failure is introduced into the runtime data.
- The monitoring system detects insufficient information for reliable assessment.

**Expected result:**

```text
ODD Assessment: Unclear

Reasons:
- Sensor failure: gps
```

---

### Scenario 3: Dynamic Speed Violation

**Description:**

- The vehicle exceeds the configured dynamic speed constraints.
- Historical speed data violates the defined ODD condition.

**Expected result:**

```text
ODD Assessment: Outside ODD

Reasons:
- Historical speed exceeded limit
```

## Project Structure

The project is organized into modular components:

```text
Autonomous-ODD-Monitoring-Demo
|
├── main.cpp
|   Entry point and scenario execution
|
├── RuntimeData
|   Runtime vehicle data representation
|
├── ODDConfig
|   ODD constraints and configuration parameters
|
├── ODDMonitor
|   Core monitoring component that evaluates runtime conditions
|
├── Checker
|   |
|   ├── SpeedChecker
|   |   Speed condition verification
|   |
|   ├── SensorChecker
|   |   Sensor availability verification
|   |
|   ├── EmergencyChecker
|       Emergency status monitoring
|
├── ScenarioRunner
|   Predefined runtime scenario demonstrations
|
├── Vehicle
|   Vehicle state representation
|
├── CMakeLists.txt
    Build configuration
```
## Build and Run

### Requirements

The project requires:

- C++ compiler with C++17 support
- CMake (version 3.10 or above)

Tested environment:

- Ubuntu 24.04
- GCC 13
- CMake


### Build Instructions

Clone the repository:

```bash
git clone https://github.com/chateau181/Autonomous-ODD-Monitoring-Demo.git

cd Autonomous-ODD-Monitoring-Demo
```

Create a build directory:

```bash
mkdir build
cd build
```

Generate build files:

```bash
cmake ..
```

Compile the project:

```bash
make
```


### Run the Demo

After successful compilation:

```bash
./ODDMonitor
```

The program executes predefined runtime scenarios and outputs the ODD assessment result:

```text
Scenario 1: Normal Operation
ODD Assessment: Inside ODD


Scenario 2: Sensor Failure
ODD Assessment: Unclear


Scenario 3: Dynamic Speed Violation
ODD Assessment: Outside ODD
```

## Future Improvements

This prototype provides a modular ODD monitoring framework for evaluating runtime conditions in autonomous systems.
Future extensions could include:

- Ontology-based ODD reasoning
  - Integrate semantic models to support knowledge-based environment representation and rule reasoning.

- Real-time runtime data streaming
  - Replace predefined scenarios with continuous vehicle and sensor data input.

- Advanced uncertainty handling
  - Improve decision-making for ambiguous or incomplete sensor information.

- ROS2 integration
  - Connect the monitoring framework with autonomous system components through ROS2 communication interfaces.

- Visualization and monitoring interface
  - Provide real-time visualization of ODD status and detected violations.
```
