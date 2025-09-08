#include "MySqlFactory.h"
#include "MySqlConnection.h"
#include "MySqlCommand.h"


Command * MySqlFactory::CreateCommand(){
    return new MySqlCommand{};
}

Connection * MySqlFactory::CreateConnection(){
        return new MySqlConnection;
}