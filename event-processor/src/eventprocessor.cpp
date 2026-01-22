#include <iostream>

#include "eventprocessor.h"
#include "event.h"
#include "event_config.h"

using namespace std;


void EventProcessor::process(const Event& e){
    if(!EventConfig::isEnabled(e.getType())){
        cout<<eventTypeToString(e.getType())<<" event is disabled.\n"<<endl;
        return;
    }

    cout<<"Processing Event\n"<<endl;

    e.print();

    cout<<"Processing Event Done\n"<<endl;

}