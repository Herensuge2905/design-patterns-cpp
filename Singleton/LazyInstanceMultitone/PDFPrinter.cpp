#include "PDFPrinter.h"
#include <iostream>
#include "printerProvider.h"


PrinterPtr PDFPrinter::GetInstance()
{
    return std::shared_ptr<PDFPrinter>{new PDFPrinter{}};
}

void PDFPrinter::Print(const std::string& data)
{
    std::cout << "[PDFPRINTER]" << data << '\n';
}