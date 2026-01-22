#pragma once

#include <string>
using namespace std;

enum class EventType {
    ACCOUNT_OPEN,
    DEPOSIT,
    TRANSFER
};

//Helper function to convert enum to string
inline string eventTypeToString(EventType type){
    switch(type){
        case EventType::ACCOUNT_OPEN: return "ACCOUNT_OPEN";
        case EventType::DEPOSIT: return "DEPOSIT";
        case EventType::TRANSFER: return "TRANSFER";
        default: return "UNKNOWN";
    }
}
