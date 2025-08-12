#include "concreteCreator2.h"
#include "concreteProduct2.h"

Product * ConcreteCreator2::Create(){
    return new ConcreteProduct2{};
}