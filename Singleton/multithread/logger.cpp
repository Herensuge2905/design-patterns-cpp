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
    
    /*El problema con el modelo bloqueandte de abajo es que siempre que es llamada la función el thread se bloquea
    lo cual es ciertamente innecesario*/

    /*m_Mtx.lock();
    if(m_Instance == nullptr){
        m_Instance = new Logger();
    }
    m_Mtx.unlock();
    */

    /*Para evitar ese bloqueo innecesario, se puede usar el patron de double checked locking pattern*/
    if(m_Instance == nullptr){
        m_Mtx.lock();
        if(m_Instance == nullptr)
            m_Instance = new Logger();
        m_Mtx.unlock();
    }

    /* Sis e intenta hacer una validación en un solo if, se llamara de manera concurrente el recurso, intentando crear 4 copias del programa y
    crashenadolo por ello*/
    return *m_Instance;
}