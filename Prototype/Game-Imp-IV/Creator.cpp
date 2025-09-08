#include "Creator.h"
#include "Bus.h"
#include "Car.h"


Vehicle * Create(
        std::string_view type,
        int mSpeed, 
        int mHitPoints, 
        const std::string& mName, 
        std::string_view animation, 
        const Position& mPosition){
            if(type == "redcar"){
                return new Car(mSpeed,mHitPoints,mName,animation,mPosition,"Red");
            }
            if(type == "greencar"){
                return new Car(mSpeed,mHitPoints,mName,animation,mPosition,"Green");
            }
            if(type == "yellowbus"){
                return new Bus(mSpeed,mHitPoints,mName,animation,mPosition,"Yellow");
            }
            if(type == "bluebus"){
                return new Bus(mSpeed,mHitPoints,mName,animation,mPosition,"Blue");
            }
        return nullptr;
}