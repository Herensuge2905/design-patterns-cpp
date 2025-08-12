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
std::once_flag flag;
Logger& Logger::loggerObj(){  // Nexesario este cambio para mantener la validez del lazy instance
    
    /*Esta función asegura el hecho de que el callback solo sea llamado una vez en uno de los threads, una vez ejecutado
    no vuelve a llamarse*/
    std::call_once(flag, [](int){
        m_Instance = new Logger();
    }, 5);

    // If you are working with InitOnceExecuteOnce - Win32
    // pthread_once - Linux (POSIX) 
    return *m_Instance;
}
