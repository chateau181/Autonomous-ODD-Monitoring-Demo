# Autonomous ODD Monitoring Demo


## Overview

This project implements a lightweight C++ prototype for monitoring the Operational Design Domain (ODD) conditions of an autonomous transport system.

The system evaluates runtime vehicle data and determines whether the current operating condition is:

- Inside ODD
- Outside ODD
- Unclear


The prototype demonstrates a modular monitoring architecture commonly used in autonomous driving and robotic systems.

## Features

- Modular C++ architecture with separated components
- Runtime vehicle data abstraction
- ODD condition evaluation through independent checkers
- Multiple monitoring conditions:
  - Speed limitation checking
  - Sensor availability checking
  - Emergency status monitoring
  - Dynamic speed history analysis

- Scenario-based testing:
  - Normal operation
  - Sensor failure
  - Dynamic speed violation
