#pragma once

#include <Vector>
#include "Vehicle.h"


class Vehicle;

class GameManager
{
    std::vector<VehiclePtr> m_Vehicles{};
    public:
    void Run();
};