#pragma once
#include "Prototype.h"

class ConcretePrototype1: public Prototype{

    Prototype * Clone() override;

};
