#pragma once
#include "Printer.h"
#include <iostream>

class PDFPrinter : public Printer
{
    static PDFPrinter m_Instance;
    PDFPrinter();
public:
    void Print(const std::string& data) override;
};
