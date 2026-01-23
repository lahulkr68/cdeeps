#ifndef PRINT_HANDLER_H
#define PRINT_HANDLER_H

#include "event_handler.h"
#include <iostream>

class PrintHandler : public IEventHandler {
public:
    void handle(const Event& event) override;
};

#endif