#include "ConcreteFactory1.h"
#include "Set1.h"

AbstractProductA * CreateProductA(){

    return new ProductA1();

}
AbstractProductB * CreateProductB(){

    return new ProductB1();
}


