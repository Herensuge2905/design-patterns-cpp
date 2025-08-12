#include "concreteCreator.h"
#include "concreteProduct.h"

Product* ConcreteCreator::Create(){
    return new ConcreteProduct{};
}