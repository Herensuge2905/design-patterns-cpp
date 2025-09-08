#pragma once
#include <string_view>

class Command;
class Connection;

class DbFactory
{
    public:
        virtual Connection * CreateConnection() = 0;
        virtual Command * CreateCommand() = 0;
        virtual ~DbFactory()=default;
};