#include "ActorPool.h"
#include "Missile.h"
#include "Alien.h"
#include <algorithm>
#include <iostream>

ActorPtr ActorPool::InternalCreate(const std::string &key){
    std::cout<<"[POOL] create new actor type: " << key << "\n";
    if(key == "missile")
        return std::make_shared<Missile>();
    else if(key == "alien")
        return std::make_shared<Alien>();
    return nullptr;
} 

ActorPtr ActorPool::FindActor(const std::vector<ActorPtr>& actors){
    auto itActor = std::find_if(begin(actors),end(actors),
                    [](const auto &actor){
                        return !actor->isVisible();
                    });
    if(itActor != end(actors)){
        (*itActor)->SetVisibility(true);
        return *itActor;
    }
    return nullptr;
}


ActorPtr ActorPool::AcquireActor(const std::string &key)
{
    ActorPtr actor{};
    if(auto it = m_ActorPool.find(key); it == end(m_ActorPool)){
        actor = InternalCreate(key);
        m_ActorPool[key].push_back(actor);
        return actor;
    }
    auto actors = m_ActorPool[key];
    actor = FindActor(actors);
    if(!actor){
        actor = InternalCreate(key);
        actors.push_back(actor);
    }
    else{
        std::cout << "[POOL] Returning existing actor of type: " << key << '\n';
    }
    return actor;
}
void ActorPool::ReleaseActor(const std::string &key, const ActorPtr& actor)
{
    if(auto it = m_ActorPool.find(key); it == end(m_ActorPool)){
        throw std::runtime_error("Unknown Key");
    }
    auto actors = m_ActorPool[key];
    for(auto &a : actors){
        if(a == actor){
            a->SetVisibility(false);
            break;
        }
    }
}