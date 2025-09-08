#include "ConcreteFactory1.h"
#include "Set2.h"

AbstractProductA * CreateProductA(){

    return new ProductA2();

}
AbstractProductB * CreateProductB(){

    return new ProductB2();
}


