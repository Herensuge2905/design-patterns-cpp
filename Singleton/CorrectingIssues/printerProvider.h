#pragma once
#include <unordered_map>
#include "Printer.h"

//Registry of singletons 
//multitone - multiple singletone 
class PrinterProvider
{
    inline static std::unordered_map<std::string, Printer *> m_Printers{};
    PrinterProvider() = default;
public:
    static void RegisterPrinter(const std::string &key, Printer *p);
    static Printer * GetPrinterPtr(const std::string &key);
    static Printer & GetPrinterRef(const std::string &key);
};
