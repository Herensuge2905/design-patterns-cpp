#pragma once
#include <unordered_map>
#include "Printer.h"
#include <functional>
#include <memory>


//Registry of singletons 
//multitone - multiple singletone 

using Creator = std::function<PrinterPtr()>;
class PrinterProvider
{
    struct InstanceInfo{
        PrinterPtr m_Printer{};
        Creator m_Creator{};
    };
    inline static std::unordered_map<std::string, InstanceInfo> m_Printers{};
    PrinterProvider() = default;
public:
    static void RegisterCreator(const std::string& key, Creator creator);
    static PrinterPtr GetPrinter(const std::string &key);
};
