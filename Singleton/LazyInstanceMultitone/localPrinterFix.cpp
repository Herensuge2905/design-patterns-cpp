#include "localPrinterFix.h"
#include <iostream>
#include "printerProvider.h"

PrinterPtr LocalPrinter::GetInstance(){
    return std::shared_ptr<LocalPrinter>{new LocalPrinter{}};
}

void LocalPrinter::Print(const std::string& data)
{
    std::cout << "[LOCALPRINTER]" << data << std::endl;
}
