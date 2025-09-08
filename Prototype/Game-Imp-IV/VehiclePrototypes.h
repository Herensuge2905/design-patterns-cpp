#pragma once
#include <unordered_map>
#include <vector>
#include <string>
class Vehicle;
class VehiclePrototypes{

    inline static std::unordered_map<std::string, Vehicle *> m_Prototypes{};
    VehiclePrototypes();
    public:
    static std::vector<std::string> GetKeys();
    static void RegisterPrototype(const std::string &key, Vehicle *prototype);
    static Vehicle * DeregisterPrototype(const std::string &key);
    static Vehicle *  GetPrototype(const std::string & key);
};