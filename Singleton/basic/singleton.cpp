#include "singleton.h"

Singleton Singleton::m_insatance;

Singleton& Singleton::Instance(){
    return m_insatance;   
}
void Singleton::MethodA(){

}
void Singleton::MethodB(){

}