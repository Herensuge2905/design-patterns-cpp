#include "localPrinterFix.h"
#include <iostream>
#include "printerProvider.h"

LocalPrinter LocalPrinter::m_Instance;

LocalPrinter& LocalPrinter::GetInstance()
{
    return m_Instance;
}

void LocalPrinter::Print(const std::string& data)
{
    std::cout << "[LOCALPRINTER]" << data << std::endl;
}

LocalPrinter::LocalPrinter()
{
    PrinterProvider::RegisterPrinter("local",this);
}