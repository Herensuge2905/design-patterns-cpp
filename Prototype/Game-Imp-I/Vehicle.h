
#pragma once


#include <iostream>
#include <string>

class Animation;

struct Position{
    int x;
    int y;
    friend std::ostream & operator <<(std::ostream &out, Position p){
        return out << '(' << p.x << ',' << p.y << ')';
    }
};



class Vehicle
{
    int m_Speed{};
    int m_HitPoints{};
    std::string m_Name{};
    Animation *m_pAnimation{};
    Position m_Position{};

    public:

    Vehicle(int mSpeed, int mHitPoints, 
            const std::string& mName, 
            std::string_view animation, 
            const Position& mPosition);
    virtual ~Vehicle();

    int GetSpeed() const{
        return m_Speed;
    }
    
    int GetHitPoints() const {
        return m_HitPoints;
    }
    const std::string & GetName() const{
        return m_Name;
    }
    
    Position GetPosition() const{
        return m_Position;
    }

    void SetSpeed(int speed){
        m_Speed = speed;
    }
    void SetHitPoints(int hit){
        m_HitPoints = hit;
    }
    void SetPosition(Position pos){
        m_Position = pos;
    }
    void SetName(const std::string &name){
        m_Name = name;
    }
    const std::string & GetAnimation();
    void SetAnimationData(const std::string &animdata);

    virtual void Update() = 0;

};