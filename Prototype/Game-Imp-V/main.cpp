#include "GameManager.h"
#include "Bus.h"
#include "Car.h"
#include "VehiclePrototypes.h"

int main(){
    VehiclePrototypes::RegisterPrototype("car", std::make_shared<Car>());
    VehiclePrototypes::RegisterPrototype("bus",std::make_shared<Bus>());
    for(const auto &prototype: VehiclePrototypes::GetKeys()){
        std::cout << prototype << '\n';
    }
    GameManager mgr;
    mgr.Run();
}