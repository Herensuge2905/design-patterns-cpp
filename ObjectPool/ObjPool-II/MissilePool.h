#pragma once

#include <memory>
#include <vector>
#include "Missile.h"

using MissilePtr = std::shared_ptr<Missile>;

class MissilePool
{
    inline static std::vector<MissilePtr> m_Missile{};
    MissilePool() = default;

public:
    static MissilePtr AcquireMissile();
    static void ReleaseMissile(const MissilePtr & missil);
};