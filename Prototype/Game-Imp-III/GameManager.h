#pragma once

#include <Vector>


class Vehicle;

class GameManager
{
    std::vector<Vehicle*> m_Vehicles;
    public:
    void Run();
    ~GameManager();
};