#pragma once

#include <string>
class Connection
{
    std::string m_ConnectionString;
public:
    void SetConnectionString(const std::string & conStr){
        m_ConnectionString = conStr;
    }
    const std::string & GetConnectonString() const{
        return m_ConnectionString;
    }
    virtual void Open() = 0;
    virtual ~Connection() = default;
};