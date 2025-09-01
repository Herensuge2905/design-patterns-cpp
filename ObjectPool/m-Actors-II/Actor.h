#pragma once

class Actor
{
    bool m_isVisible{true};
public:
    void SetVisibility(bool visible){
        m_isVisible = visible;
    }
    bool isVisible() const {
        return m_isVisible;
    }
    virtual void Update() = 0;
    virtual ~Actor() = default;
};