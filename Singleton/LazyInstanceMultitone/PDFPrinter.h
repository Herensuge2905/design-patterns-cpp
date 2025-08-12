#pragma once
#include "Printer.h"
#include <iostream>

class PDFPrinter : public Printer
{
    PDFPrinter() = default;
public:
    static PrinterPtr GetInstance();
    void Print(const std::string& data) override;
};
