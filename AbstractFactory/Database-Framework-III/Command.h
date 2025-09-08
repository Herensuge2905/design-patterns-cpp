#pragma once

#include <string>
class Connection;
class RecordSet;

class Command
{
    std::string m_CommandString{};
    protected:
    Connection *m_pConnection{};
    public:
    Connection * GetConnection() const {
        return m_pConnection;
    }

    const std::string & GetCommand() const{
        return m_CommandString;
    }
    void SetCommand(const std::string & commandStr){
        m_CommandString = commandStr;
    }
    void SetConnection(Connection * conn){
        m_pConnection = conn;
    }
    virtual void ExecuteCommand() = 0;
    virtual RecordSet * ExecuteQuery() = 0;
    virtual ~Command() = default;
};