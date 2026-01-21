#ifndef Event_H             //Guard 1 : "If EVENT_H is not defined yet"
#define Event_H             //Guard 2: Define EVENT_H - prevents include this file twice

#include <string>           //Brings in std::string for payload
#include <iostream>       //Brings in std::cout for print

#include "event_types.h"
using namespace std;      //Use standard namespace

class Event {               //Define Event class
private:                    //these members are private to Event
    int eventID;            //store event's unique id as integer
    long long timestamp;   //Store time, long long for millisecond also
    EventType eventType;
    string payload;         //store event's data/message

public:                     //these members are public to all
    Event(int id, long long ts, EventType type, string data); //Constructor declaration
    void print() const;  // const - doesn't modify the object
    int getId() const;
    long long getTimestamp() const;
    EventType getType() const;
    const string& getPayload() const;
};

#endif          //end of header guard
