#include "logger.h"
#include <iostream>

//Logger *Logger::m_Instance;

Logger::Logger(){
    std::cout << "Logger" << std::endl;
    m_pStream = fopen("applog.txt","w");
}
Logger::~Logger(){
    std::cout<< "~Logger" <<std::endl;
    fclose(m_pStream);
}
void Logger::WriteLog(const char *pMessage){
    fprintf(m_pStream, "[%s] %s\n", m_Tag.c_str(), pMessage);
    fflush(m_pStream);
}
void Logger::SetTag(const char *pTag){
    m_Tag = pTag;
}
Logger& Logger::loggerObj(){  // Nexesario este cambio para mantener la validez del lazy instance
    if(m_Instance == nullptr)
        //m_Instance = new Logger();
        m_Instance.reset(new Logger());
    return *m_Instance;
}