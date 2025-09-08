#include "Bus.h"

void Bus::Update(){
    std::cout << '[' << GetColor() << GetName() << "]\n"
        << "\tAnimation: " << GetAnimation() << '\n';
    if(m_Dist(m_Engine) && GetColor()=="Yellow"){
        std::cout << "\tMoving out of the way\n";
    }
    
    std::cout << "\tSpeed: " << GetSpeed() << '\n';
    std::cout << "\tHitPoints: " << GetHitPoints() << '\n'
        << "\tPosition: " << GetPosition() << '\n';
}

Vehicle * Bus::Clone(){
    std::cout << "Cloning->" << GetName() << '\n';
    return new Bus(*this);
}