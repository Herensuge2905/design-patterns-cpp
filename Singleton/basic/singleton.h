#pragma once
class Singleton{
    Singleton()=default;
    static Singleton m_insatance;
public:
        static Singleton & Instance();
        void MethodA();
        void MethodB();
};