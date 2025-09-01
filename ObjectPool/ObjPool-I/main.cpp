#include <thread>
#include <vector>
#include <memory>

#include "Missile.h"
#include <iostream>

std::vector<std::shared_ptr<Missile>> actors{};

void Fire()
{
    actors.push_back(std::make_shared<Missile>());
    actors.push_back(std::make_shared<Missile>());
}
void Animate(){
    for(auto &m: actors){
        m->Update();
    }
}

void Explode(){
    using namespace std;
    std::cout<<"X\n";
    for(auto &m : actors){
        m->SetVisible(false);
    }
    actors.clear();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"\n\n";
}
void GameLoop()
{
    using namespace std;
    int counter{};
    while(true)
    {
        ++counter;
        if(counter == 1){
            Fire();
        }
        if(counter >=1 && counter <= 5){
            Animate();
        }
        if(counter > 5){
            Explode();
            counter = 0;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main(){
    GameLoop();
}