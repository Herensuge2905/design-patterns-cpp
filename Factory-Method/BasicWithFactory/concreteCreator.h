#pragma once
#include "creator.h"
class ConcreteCreator : public Creator 
{
    public:
        Product * Create() override;        
};