#ifndef EVENT_DISPATCHER_H
#define EVENT_DISPATCHER_H

#include "event.h"
#include "handler_factory.h"

class EventDispatcher {
private:
    HandlerFactory& factory;
    
public:
    explicit EventDispatcher(HandlerFactory& f) : factory(f) {}
    
    void dispatch(const Event& event);
};

#endif