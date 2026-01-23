#include "event_dispatcher.h"
#include <iostream>

void EventDispatcher::dispatch(const Event& event) {
    std::cout << "Dispatching event type: " << (int)event.getType() << std::endl;
    
    IEventHandler* handler = factory.createHandler(event.getType());
    
    if (handler) {
        handler->handle(event);
        delete handler;  // Clean up
    } else {
        std::cout << "Error: No handler found for event type" << std::endl;
    }
}