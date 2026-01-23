#include "event_config.h"

void EventConfig::loadMapping() {
    handlerMapping[EventType::ACCOUNT_OPEN] = "PrintHandler";
    handlerMapping[EventType::DEPOSIT] = "PrintHandler";
    handlerMapping[EventType::TRANSFER] = "PrintHandler";
}

std::string EventConfig::getHandlerName(EventType type) const {
    auto it = handlerMapping.find(type);
    if (it != handlerMapping.end()) {
        return it->second;
    }
    return "UnknownHandler";  // Default if not found
}