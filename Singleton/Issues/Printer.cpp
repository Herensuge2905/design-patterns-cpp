#include "Printer.h"
#include "LocalPrinterFix.h"


Printer & Printer::GetInstance(const std::string& key)
{
    if(key == "local"){
        return LocalPrinter::GetInstance();
    }
}