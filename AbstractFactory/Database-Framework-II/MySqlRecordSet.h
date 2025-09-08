#pragma once
#include "RecordSet.h"
#include <vector>
#include <string>


class MySqlRecordSet : public RecordSet{
    
    const std::vector<std::string> m_Db
    {
        "Escape plan",
        "Rambo",
        "Interstellar",
        "SAW",
        "Oppenheimer",
        "Inception",
        "Black Phone",
        "Weapons"
    };

    std::vector<std::string>::const_iterator m_Cursor;

    public:
    MySqlRecordSet();
    const std::string & Get() override;
    bool HasNext() override;
};