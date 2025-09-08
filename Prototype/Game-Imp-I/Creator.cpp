#include "Creator.h"
#include "RedCar.h"
#include "GreenCar.h"
#include "YellowBus.h"
#include "BlueBus.h"


Vehicle * Create(
        std::string_view type,
        int mSpeed, 
        int mHitPoints, 
        const std::string& mName, 
        std::string_view animation, 
        const Position& mPosition){
            if(type == "redcar"){
                return new RedCar(mSpeed,mHitPoints,mName,animation,mPosition);
            }
            if(type == "greencar"){
                return new GreenCar(mSpeed,mHitPoints,mName,animation,mPosition);
            }
            if(type == "yellowbus"){
                return new YellowBus(mSpeed,mHitPoints,mName,animation,mPosition);
            }
            if(type == "bluebus"){
                return new BlueBus(mSpeed,mHitPoints,mName,animation,mPosition);
            }
        return nullptr;
}