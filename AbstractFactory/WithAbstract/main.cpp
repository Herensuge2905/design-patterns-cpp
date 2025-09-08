#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "Set1.h"
#include "Set2.h"

int main(){
    AbstractFactory * pFactory = new ConcreteFactory1();

    AbstractProductA * pA = pFactory->CreateProductA();
    AbstractProductB * pB = pFactory->CreateProductB();

    pA ->ProductA();
    pB->ProductB();

    delete pA;
    delete pB;
}