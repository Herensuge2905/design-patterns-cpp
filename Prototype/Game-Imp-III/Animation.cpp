
#include "Animation.h"
#include <iostream>
#include <thread>
#include <chrono>

Animation::Animation(std::string_view animation){
    using namespace std;
    cout << "[Animation] Loading " << animation << ' ';
    for (int i = 0; i < 10; i++)
    {
        cout << "." ;
        this_thread::sleep_for(200ms);
    }
    cout << "\n";
    m_Animation.assign("^^^^^");
}
const std::string & Animation::GetAnimationData() const {
    return m_Animation;
}

void Animation::SetAnimationData(const std::string & animation){
    m_Animation = animation;
}