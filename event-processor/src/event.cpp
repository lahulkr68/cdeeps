#include "event.h"              //include our header file to access Event class
#include "event_types.h"

Event::Event(int id, long long ts, EventType type, string data)
//Scope resolution (::) means "this function belong to Event class"
//Constructor takes 3 parameters: id, ts and data

    :eventID(id), timestamp(ts), eventType(type), payload(data){
    //Initializer list assigns parameters to memver variables
    //this is C++ way - efficient initialization
    //could also do : eventID =id; timestamp = ts payload = data; inside {}
}

void Event::print() const {
    cout<<"=== Event ==="<<endl;
    cout<<"Event ID: "<<eventID<<endl;
    cout<<"Timestamp: "<<timestamp<<endl;
    cout<<"Event Type: "<<(int)eventType<<endl;
    cout<<"Payload: "<<payload<<endl;
    cout<<endl;
}

int Event::getId() const {
    return eventID;
}

long long Event::getTimestamp() const {
    return timestamp;
}

EventType Event::getType() const {
    return eventType;
}

const string& Event::getPayload() const {
    return payload;
}