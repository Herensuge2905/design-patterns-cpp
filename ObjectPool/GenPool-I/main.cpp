#include "ObjectPool.h"


int main()
{
    using IntPool = ObjectPool<int>;
    auto p1 = IntPool::Acquire();
    auto p2 = IntPool::Acquire();
    auto p3 = IntPool::Acquire();

    IntPool::Release(p1);

    auto p4 = IntPool::Acquire();
    IntPool::Destroy();
}