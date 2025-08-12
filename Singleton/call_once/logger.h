#pragma once
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
#include <mutex>

/*Para solucionar la implementación de un singleton en entornos multinucleo, lo mejor es la implementación de mutex para controlar el acceso al recurso*/

class Logger{
    static std::mutex m_Mtx;
    Logger();
    static Logger * m_Instance;
    FILE *m_pStream;
    std::string m_Tag;
    ~Logger(); 
public:
    
    Logger(const Logger&) = delete;
    Logger & operator=(const Logger&) =delete;
    void WriteLog(const char *pMessage);
    void SetTag(const char *pTag);    
    static Logger& loggerObj();

};