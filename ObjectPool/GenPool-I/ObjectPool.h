#pragma once

#include <vector>
#include <iostream>

template <typename T> class ObjectPool
{
    struct ObjectInfo{
        bool m_IsUsed{};
        *m_pObject{};
    };
    inline static std::vector<ObjectInfo> m_PooledObjects{};
public:
    static T * Acquire(){
        for(auto &obj : m_PooledObjects){
            if(!obj.m_IsUsed){
                obj.m_IsUsed = true;
                std::cout << "[POOL] Returning an exsisting object\n";
                return obj.m_pObject;
            }
        }
        std::cout << "[POOL] Creating a new object \n ";
        auto pObj = new T{};
        m_PooledObjects.push_back({true,pObj});
        return pObj;
    }
    static void Release(const T *pObj){
        for(auto &obj: m_PooledObjects){
            if(obj.m_pObject == pObj){
                obj.m_IsUsed = false;
                break;
            }
        }
    }
    static void Destroy(){
        for(auto &obj: m_PooledObjects){
            if(obj.m_IsUsed){
                std::cout << "WARNING! Deleting an object still in use\n";
            }
            delete obj.m_pObject;
        }
        m_PooledObjects.clear();
    }
};