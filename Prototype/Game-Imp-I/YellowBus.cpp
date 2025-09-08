#include "YellowBus.h"

void YellowBus::Update(){
    std::cout << '[' << GetName() << "]\n"
        << "\tAnimation: " << GetAnimation() << '\n';
    if(m_Dist(m_Engine)){
        std::cout << "\tMoving out of the way\n";
    }
    
    std::cout << "\tSpeed: " << GetSpeed() << '\n';
    std::cout << "\tHitPoints: " << GetHitPoints() << '\n'
        << "\tPosition: " << GetPosition() << '\n';
}