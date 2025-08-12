#pragma once
#include <cstdio>
#include <string>

class Logger{
    Logger();
    static Logger m_Instance; // A este tipo de instancia se le conoce como Eager instance creada una vez el programa es cargado
    FILE *m_pStream;
    std::string m_Tag;
public:
    Logger(const Logger&) = delete;
    Logger & operator=(const Logger&) =delete;
    ~Logger();
    void WriteLog(const char *pMessage);
    void SetTag(const char *pTag);    
    static Logger& loggerObj();

};