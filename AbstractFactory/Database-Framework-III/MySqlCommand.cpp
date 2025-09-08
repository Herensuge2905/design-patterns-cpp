#include "MySqlCommand.h"
#include <iostream>
#include "Connection.h"
#include "SqlRecordSet.h"

void MySqlCommand::ExecuteCommand(){
    std::cout 
        <<  "[MySqlCommand] Executing command on :"
        << m_pConnection->GetConnectonString()
        << std::endl;
}
MySqlRecordSet * MySqlCommand::ExecuteQuery(){
    std::cout << "[MySqlCommand] Executing Query\n";
    return new MySqlRecordSet;
}