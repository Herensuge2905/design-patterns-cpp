#pragma once
#include <string_view>
#include "Connection.h"
#include "Command.h"

class DbFactory
{
    public:
        static Connection * CreateConnection(std::string_view typeDB);
        static Command * CreateCommand(std::string_view typeCmd);
};