#include "logger.h"
#include <iostream>

Logger *Logger::m_Instance;
std::mutex Logger::m_Mtx;

Logger::Logger(){
    std::cout << "Logger" << std::endl;
    m_pStream = fopen("applog.txt","w");
    atexit([](){    // Esta es una función que permite llamar a un callback de manera automática una vez se realiza el retorno del programa principal (main)
        delete m_Instance;
    });
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
    
    /*Este es el meyers singleton, esto es thread safe y es seguro que se llama solo a una instancia, por otro lado no es necesario
    llamar  al destrucot, pues el código ya esta dentro de una sección*/
    static Logger Instance;
    return Instance;
}