#include "event_config.h"

bool EventConfig::isEnabled(EventType type){
    switch (type){
        case EventType::ACCOUNT_OPEN:
            return true;
        
        case EventType::DEPOSIT:
            return false;
        
        case EventType::TRANSFER:
            return true;
        
        default:
            return false;
    }
}