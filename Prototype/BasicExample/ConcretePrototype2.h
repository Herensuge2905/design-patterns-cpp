#pragma once
#include "Prototype.h"

class ConcretePrototype2: public Prototype{

    Prototype * Clone() override;

};
