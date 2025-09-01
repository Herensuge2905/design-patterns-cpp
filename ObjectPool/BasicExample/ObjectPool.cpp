#include "ObjectPool.h"
#include "SharedObject.h"
#include <iostream>


SharedObject* ObjectPool::AcquireObject(){
    for(auto & so: m_PooledObjects){
        if(!so->IsUsed()){
            std::cout<<"[POOL] Returning an existing object"<<std::endl;
            so->SetUsedState(true);
            so->Reset();
            return so;
        }
    }
    std::cout<< "[POOL] Creating a new object"<<std::endl;
    SharedObject *so = new SharedObject{};
    m_PooledObjects.push_back(so);
    return so;
}
void ObjectPool::ReleaseObject(SharedObject *pSO){
    for(auto &so: m_PooledObjects){
        if(so == so)
            so->SetUsedState(false);
    }
}