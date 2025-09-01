#include "MissilePool.h"
#include <iostream>

MissilePtr MissilePool::AcquireMissile()
{
    for(auto &missile : m_Missile){
        if(!missile->IsVisible()){
            missile->SetVisible(true);
            std::cout<<"[POOL] Returning an existing instance\n";
            return missile;
        }
    }
    std::cout << "[POOL] Creating a new instance\n";
    auto missile = std::make_shared<Missile>();
    m_Missile.push_back(missile);
    return missile;
}
void MissilePool::ReleaseMissile(const MissilePtr & missile)
{
    for(auto &m : m_Missile){
        if(m == missile)
            m->SetVisible(false);
    }
}