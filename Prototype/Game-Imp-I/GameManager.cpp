#include "GameManager.h"
#include "Vehicle.h"
#include "creator.h"
#include <chrono>
#include <thread>


void GameManager::Run(){
    m_Vehicles.push_back(Create("redcar",30, 10, "Redcar", "red.anim", {0,0}));
    m_Vehicles.push_back(Create("greencar",30, 15, "Greencar", "green.anim", {100,0}));
    m_Vehicles.push_back(Create("yellowbus",25, 20, "BlueBus", "Bbus.anim", {100,200}));
    m_Vehicles.push_back(Create("bluebus",25, 25, "YellowBus", "Ybus.anim", {200,200}));
    int count{5};
    while(count != 0){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        system("cls");
        for(auto vehicle : m_Vehicles){
            vehicle->Update();
        }
        if(count == 2){
            m_Vehicles.push_back(Create("redcar",30, 15, "Redcar", "red.anim", {50,50}));
        }
        if(count == 3){
            m_Vehicles.push_back(Create("yellowbus",21, 20, "YellowBus", "Ybus.anim", {150,170}));
        }
        count--;
    }
}

GameManager::~GameManager(){
    for(auto vehicle:m_Vehicles){
        delete vehicle;
    }
}