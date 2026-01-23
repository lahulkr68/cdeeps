#ifndef EVENT_CONFIG_H
#define EVENT_CONFIG_H

#include "event_types.h"
#include <map>
#include <string>

class EventConfig {
private:
    std::map<EventType, std::string> handlerMapping;
    
public:
    void loadMapping();  // Load hardcoded mapping
    std::string getHandlerName(EventType type) const;
};

#endif