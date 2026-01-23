#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H

#include "event.h"

// Abstract interface - all handlers must implement this
class IEventHandler {
public:
    virtual ~IEventHandler() = default;  // Virtual destructor
    virtual void handle(const Event& event) = 0;  // Pure virtual = must override
};

#endif