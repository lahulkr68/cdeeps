# CDEEPS

## Config-Driven Enterprise Event Publishing System

---

## Problem Statement

In enterprise systems (banking, fintech, payments), not every business operation should publish an event. Event publishing must be:
- Configurable at runtime
- Reliable and recoverable  
- Decoupled from business logic

CDEEPS simulates a production-grade backend system where events are published only if enabled via configuration.

---

## Core Idea

Whenever a business operation occurs (e.g. Account Open, Deposit, Transfer):

1. An event is created
2. Configuration is checked
3. If enabled → event is processed (future: persisted & published)
4. If disabled → event is skipped safely

This mirrors how enterprise systems handle event publishing.

---

## Architecture Overview

```
main()
 └── creates Event
 └── calls EventProcessor::process()
     ├── checks EventConfig
     ├── skips if disabled
     └── processes if enabled
```

---

## Implemented Features

- ✅ Event domain model (ID, type, timestamp, payload)
- ✅ EventType enum for strong typing (ACCOUNT_OPEN, DEPOSIT, TRANSFER)
- ✅ Config-driven enable/disable logic
- ✅ Stateless EventProcessor
- ✅ Clean separation of concerns
- ✅ Modular C++ project structure
- ✅ Const-correct interfaces

---

## Project Structure

```
cdeeps/
├── inc/
│   ├── event.h
│   ├── event_types.h
│   ├── event_config.h
│   └── eventprocessor.h
├── src/
│   ├── main.cpp
│   ├── event.cpp
│   ├── event_config.cpp
│   ├── eventprocessor.cpp
│   └── event-processor.exe
└── README.md
```

---

## Build & Run

**Compile:**
```bash
cd src
g++ -I../inc main.cpp event.cpp event_config.cpp eventprocessor.cpp -o event-processor.exe
```

**Run:**
```bash
./event-processor.exe
```

---

## Design Decisions

**Config outside processor**: Allows behavior changes without code modification

**Stateless processor**: Enables horizontal scaling

**Const-correct interfaces**: Prevent accidental mutation

**Domain-driven EventType**: Prevents invalid states

---

## Next Steps

- [ ] Load config from JSON instead of hardcoded values
- [ ] Add event persistence
- [ ] Add retry & DLQ handling
- [ ] Simulate Kafka / REST publishing

---

## Tech Stack

- C++17
- STL (vector, string, iostream, chrono)
- g++ compiler

---
