#include "GameManager.h"
#include "Bus.h"
#include "Car.h"
#include "VehiclePrototypes.h"

int main(){
    VehiclePrototypes::RegisterPrototype("car", new Car{});
    VehiclePrototypes::RegisterPrototype("bus",new Bus{});
    for(const auto &prototype: VehiclePrototypes::GetKeys()){
        std::cout << prototype << '\n';
    }
    GameManager mgr;
    mgr.Run();
}