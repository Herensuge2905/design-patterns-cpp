#include "GameManager.h"
#include "Vehicle.h"
#include "creator.h"
#include <chrono>
#include <thread>
#include "Animation.h"
#include "VehiclePrototypes.h"

Vehicle * GetRedCar(){
    auto vehicle = VehiclePrototypes::GetPrototype("car");
    vehicle->setColor("Red");
    vehicle->SetHitPoints(10);
    vehicle->SetSpeed(30);
    vehicle->SetPosition({0,0});
    Animation anim{"red.anim"};
    vehicle->SetAnimationData(anim.GetAnimationData());
    return vehicle;
}
Vehicle * GetGreenCar(){
    auto vehicle = VehiclePrototypes::GetPrototype("car");
    vehicle->setColor("Green");
    vehicle->SetHitPoints(12);
    vehicle->SetSpeed(80);
    vehicle->SetPosition({100,0});
    Animation anim{"green.anim"};
    vehicle->SetAnimationData(anim.GetAnimationData());
    return vehicle;
}
Vehicle * GetYellowBus(){
    auto vehicle = VehiclePrototypes::GetPrototype("bus");
    vehicle->setColor("Yellow");
    vehicle->SetHitPoints(45);
    vehicle->SetSpeed(18);
    vehicle->SetPosition({200,100});
    Animation anim{"ybus.anim"};
    vehicle->SetAnimationData(anim.GetAnimationData());
    return vehicle;
}
Vehicle * GetBlueBus(){
    auto vehicle = VehiclePrototypes::GetPrototype("bus");
    vehicle->setColor("Blue");
    vehicle->SetHitPoints(15);
    vehicle->SetSpeed(20);
    vehicle->SetPosition({150,130});
    Animation anim{"bbus.anim"};
    vehicle->SetAnimationData(anim.GetAnimationData());
    return vehicle;
}

void GameManager::Run(){
    m_Vehicles.push_back(GetRedCar());
    m_Vehicles.push_back(GetGreenCar());
    m_Vehicles.push_back(GetYellowBus());
    m_Vehicles.push_back(GetBlueBus());
    int count{5};
    while(count != 0){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        for(auto vehicle : m_Vehicles){
            vehicle->Update();
        }
        if(count == 2){
            //m_Vehicles.push_back(Create("redcar",30, 15, "Redcar", "red.anim", {50,50}));
            auto vehicle = m_Vehicles[0]->Clone();
            vehicle->SetPosition({50,50});
            vehicle->SetHitPoints(15);
            m_Vehicles.push_back(vehicle);
        }
        if(count == 3){
            //m_Vehicles.push_back(Create("yellowbus",21, 20, "YellowBus", "Ybus.anim", {150,170}));
            auto vehicle = m_Vehicles[2]->Clone();
            vehicle->SetPosition({150,250});
            vehicle->SetSpeed(10);
            m_Vehicles.push_back(vehicle);
        }
        count--;
    }
}

GameManager::~GameManager(){
    for(auto vehicle:m_Vehicles){
        delete vehicle;
    }
}