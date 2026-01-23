#include "handler_factory.h"
#include "print_handler.h"
#include <iostream>

IEventHandler* HandlerFactory::createHandler(EventType type) {
    std::string handlerName = config.getHandlerName(type);
    
    if (handlerName == "PrintHandler") {
        return new PrintHandler();
    }
    
    // Later: add LogHandler, DatabaseHandler, etc.
    
    return nullptr;  // Handler not found
}