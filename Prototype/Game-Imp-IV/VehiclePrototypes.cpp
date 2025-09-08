#include "VehiclePrototypes.h"
#include "Vehicle.h"
#include <iostream>

std::vector<std::string> VehiclePrototypes::GetKeys(){
    std::vector<std::string> keys{};
    keys.reserve(m_Prototypes.size());
    for(const auto &kv : m_Prototypes){
        keys.push_back(kv.first);
    }
    return keys;
}
void VehiclePrototypes::RegisterPrototype(const std::string &key, Vehicle *prototype){
    if(auto it = m_Prototypes.find(key);it == end(m_Prototypes)){
        m_Prototypes[key] = prototype;
    }
    else{
        std::cout << "Key already exists/n";
    }
}
Vehicle * VehiclePrototypes::DeregisterPrototype(const std::string &key){
    if(auto it = m_Prototypes.find(key);it != end(m_Prototypes)){
        auto vehicle = m_Prototypes[key];
        m_Prototypes.erase(key);
        return vehicle;
    }
    return nullptr;
}
Vehicle *  VehiclePrototypes::GetPrototype(const std::string & key){
    if(auto it = m_Prototypes.find(key);it != end(m_Prototypes)){
        return m_Prototypes[key]->Clone();
    }
    return nullptr;
}