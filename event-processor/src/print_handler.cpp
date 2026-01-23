#include "print_handler.h"

void PrintHandler::handle(const Event& event) {
    std::cout << "=== PrintHandler ===" << std::endl;
    event.print();
    std::cout << "=== Handler Done ===" << std::endl;
}