#include "localPrinterFix.h"
#include "PrinterProvider.h"

void PrintSales()
{
    auto p = PrinterProvider::GetPrinterPtr("local");
    if(p)
        p->Print("Sales data");
}

int main()
{
    auto p = PrinterProvider::GetPrinterPtr("local");
    if(p)
        p->Print("Printing data to local printer");
    PrintSales();
}

