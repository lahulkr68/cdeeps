#include <iostream>

#include "eventprocessor.h"

using namespace std;


void EventProcessor::process(const Event& e){
    cout<<"Processing Event"<<endl;

    e.print();

    cout<<"Processing Event Done"<<endl;

}