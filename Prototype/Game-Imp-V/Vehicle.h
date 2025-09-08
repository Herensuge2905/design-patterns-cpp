
#pragma once


#include <iostream>
#include <string>
#include <memory>

class Animation;
class Vehicle;
using VehiclePtr = std::shared_ptr<Vehicle>;

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
    std::string m_Color{};

    public:

    Vehicle();
    Vehicle(int mSpeed, int mHitPoints, 
            const std::string& mName, 
            std::string_view animation, 
            const Position& mPosition,
            const std::string & mcolor);
    virtual ~Vehicle();
    Vehicle(const Vehicle &other);
    Vehicle & operator=(const Vehicle &other);
    Vehicle(Vehicle &&othre) noexcept;
    Vehicle & operator=(Vehicle &&other) noexcept;


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

    const std::string & GetColor() const{
        return m_Color;
    }

    void setColor(const std::string & mColor){
        m_Color = mColor;
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
    const std::string & GetAnimation() const;
    void SetAnimationData(const std::string &animdata);

    virtual void Update() = 0;
    virtual VehiclePtr Clone() = 0;

};