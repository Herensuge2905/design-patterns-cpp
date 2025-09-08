#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include <iostream>

class ProductA2 : public AbstractProductA {

    public:
    void ProductA() override{
        std::cout << "[2] Produc A\n";
    }
};
 
class ProductB2 : public AbstractProductB{
    public:
    void ProductB() override{
        std::cout << "[2] Product B\n";
    }
};