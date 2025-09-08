#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "Set1.h"
#include "Set2.h"

int main(){
    AbstractProductA * pA = new ProductA1{};
    AbstractProductB * pB = new ProductB1();

    pA ->ProductA();
    pB->ProductB();

    delete pA;
    delete pB;
}