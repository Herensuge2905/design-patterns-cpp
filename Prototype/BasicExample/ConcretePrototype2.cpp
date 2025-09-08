#include "ConcretePrototype2.h"
#include <iostream>

Prototype * ConcretePrototype2::Clone(){
    std::cout << "[ConcretePrototype2] cloning .....\n";
    return new ConcretePrototype2(*this);
}