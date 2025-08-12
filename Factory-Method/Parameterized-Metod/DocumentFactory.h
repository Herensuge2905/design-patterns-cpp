#pragma once
#include "Document.h"
#include <memory>
#include <string>

class DocumentFactory
{
    public:
        static DocumentPtr Create(const std::string &type);
};