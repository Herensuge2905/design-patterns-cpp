#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"s
#include <iostream>

class ProductA1 : public AbstractProductA {

    public:
    void ProductA() override{
        std::cout << "[1] Produc A\n";
    }
};
 
class ProductB1 : public AbstractProductB{
    public:
    void ProductB() override{
        std::cout << "[1] Product B\n";
    }
};