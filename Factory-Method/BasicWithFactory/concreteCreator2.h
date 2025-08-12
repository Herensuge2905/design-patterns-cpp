#pragma once
#include "creator.h"

class ConcreteCreator2 : public Creator
{
    public:
    Product * Create() override;
};