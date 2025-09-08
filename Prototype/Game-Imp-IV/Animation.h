#pragma once

#include <string>
#include <string_view>

class Animation{
    std::string m_Animation;
    public:
    Animation() = default;
    Animation(std::string_view animation);
    const std::string & GetAnimationData() const;
    void SetAnimationData(const std::string &animation);
};