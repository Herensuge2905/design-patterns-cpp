#include "SqlCommand.h"
#include <iostream>


#include "Connection.h"

void SqlCommand::ExecuteCommand(){
    std::cout 
        << "[SQLCommand] Executing command on"
        << m_pConnection->GetConnectonString();
}
SqlRecordSet * SqlCommand::ExecuteQuery(){
    std::cout << "[SQLCommand] Executing query\n";
    return new SqlRecordSet();
}