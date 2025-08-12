#pragma once
#include "Document.h"

class SpreadSheetDocument : public Document
{
    public:
        void Write() override;
        void Read() override;
        
};