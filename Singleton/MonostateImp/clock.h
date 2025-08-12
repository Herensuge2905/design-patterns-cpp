#pragma once
#define CRT_SECURE_NO_WARNINGS
#include <string>
class Clock
{
    inline static int m_Hour;
    inline static int m_Minute;
    inline static int m_Second;inline 
    void CurrentTime();
    Clock() = default;
public:

    static int GetHour();
    static int GetMinute();
    static int GetSecond();
    static std::string GetTimeString();
};