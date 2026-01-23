#ifndef HANDLER_FACTORY_H
#define HANDLER_FACTORY_H

#include "event_handler.h"
#include "event_config.h"

class HandlerFactory {
private:
    const EventConfig& config;
    
public:
    explicit HandlerFactory(const EventConfig& cfg) : config(cfg) {}
    
    IEventHandler* createHandler(EventType type);
};

#endif