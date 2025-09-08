#include "Vehicle.h"
#include "Animation.h"

Vehicle::Vehicle(int mSpeed, int mHitPoints, 
            const std::string& mName, 
            std::string_view animation, 
            const Position& mPosition)
            :   m_Speed{mSpeed},
                m_HitPoints(mHitPoints),
                m_Name{mName},
                m_Position{mPosition}
    {
        m_pAnimation = new Animation(animation);
    }

Vehicle::~Vehicle(){
    delete m_pAnimation;
}

void Vehicle::SetAnimationData(const std::string& animData){
    m_pAnimation->SetAnimationData(animData);
}

const std::string & Vehicle::GetAnimation(){
    return m_pAnimation->GetAnimationData();
}