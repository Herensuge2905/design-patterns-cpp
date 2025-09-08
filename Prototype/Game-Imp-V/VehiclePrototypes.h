#pragma once
#include <unordered_map>
#include "Vehicle.h"
#include <vector>
#include <string>
class Vehicle;
class VehiclePrototypes{

    inline static std::unordered_map<std::string, VehiclePtr> m_Prototypes{};
    VehiclePrototypes();
    public:
    static std::vector<std::string> GetKeys();
    static void RegisterPrototype(const std::string &key, VehiclePtr prototype);
    static VehiclePtr DeregisterPrototype(const std::string &key);
    static VehiclePtr  GetPrototype(const std::string & key);
};