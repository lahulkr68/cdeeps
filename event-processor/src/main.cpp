#include "event.h"              //include Event class
#include "eventprocessor.h"     //include event processor
#include "event_types.h"
#include <vector>               //include vector
#include <chrono>               //include chrono for time functions
using namespace std;          //use standard namespace


int main(){
    EventProcessor processor;
    vector<Event> events;       //create empty vector to store Event objects

    long long currentTime = std::chrono::system_clock::now()
        .time_since_epoch()
        .count();


    Event event1(1, currentTime, EventType::ACCOUNT_OPEN, "Account Opened");

    Event event2(2, currentTime, EventType::DEPOSIT, "Fund Deposited");
    Event event3(3, currentTime, EventType::TRANSFER, "Fund Transfered");

 
    events.push_back(event1);
    events.push_back(event2);
    events.push_back(event3);

    int eSize = events.size();
    for(int i=0; i<eSize; i++){
        //events[i].print();      //access event at index i, call its print() method
        processor.process(events[i]);
    }

    return 0;
}