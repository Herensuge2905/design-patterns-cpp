#pragma once
#define CRT_SECURE_NO_WARNINGS
#include <string>
class Clock
{
    int m_Hour;
    int m_Minute;
    int m_Second;
    void CurrentTime();
public:
    Clock() = default;
    int GetHour();
    int GetMinute();
    int GetSecond();
    std::string GetTimeString();
};