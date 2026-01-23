#include "event.h"
#include "event_config.h"
#include "handler_factory.h"
#include "event_dispatcher.h"
#include <chrono>

using namespace std;

int main(){
    // Step 1: Load config
    EventConfig config;
    config.loadMapping();  // ACCOUNT_OPEN → PrintHandler, etc.
    
    // Step 2: Create factory
    HandlerFactory factory(config);
    
    // Step 3: Create dispatcher
    EventDispatcher dispatcher(factory);
    
    // Step 4: Create events
    long long currentTime = chrono::system_clock::now().time_since_epoch().count();
    
    Event event1(1, currentTime, EventType::ACCOUNT_OPEN,"Account Opened");
    Event event2(2, currentTime, EventType::DEPOSIT, "Fund Deposited");
    Event event3(3, currentTime, EventType::TRANSFER, "Fund Transferred");
    
    // Step 5: Dispatch events (routing happens here!)
    dispatcher.dispatch(event1);  // Routes to PrintHandler
    dispatcher.dispatch(event2);  // Routes to PrintHandler
    dispatcher.dispatch(event3);  // Routes to PrintHandler
    
    return 0;
} 