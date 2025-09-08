#include "DbFactory.h"
#include "MySqlCommand.h"
#include "SqlCommand.h"
#include "MySqlConnection.h"
#include "SqlConnection.h"

 Connection * DbFactory::CreateConnection(std::string_view typeDB){
    if(typeDB == "sql"){
        return new SqlConnection();
    }
    if(typeDB == "mysql"){
        return new MySqlConnection();
    }
    return nullptr;
 }
 Command * DbFactory::CreateCommand(std::string_view typeCmd){
    if(typeCmd == "sql"){
        return new SqlCommand();
    }
    if(typeCmd == "mysql"){
        return new MySqlCommand();
    }
    return nullptr;
 }