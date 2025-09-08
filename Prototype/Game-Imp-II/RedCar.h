#pragma once

#include "Vehicle.h"
#include <random>

class RedCar : public Vehicle {
    using Vehicle::Vehicle;
    float m_SpeedFactor{1.5f};
    std::default_random_engine m_Engine{100};
    std::bernoulli_distribution m_Dist{.5};
    public:
    void SetSpeedFactor(float factor){
        m_SpeedFactor = factor;
    }
    void Update() override;
    Vehicle* Clone() override;
};