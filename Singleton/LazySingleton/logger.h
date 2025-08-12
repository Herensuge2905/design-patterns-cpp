#pragma once
#include <cstdio>
#include <string>
#include <bits/stdc++.h>

/*El problema con este lazy, es que el destructor nunca es llamado, por lo cual hay que invocarlo manualmente de distintas maneras
Para evitar el llamado del destructor fuera de la clase, lo mejor es hacerlo privado
1- Haciendo uso de smart pointers*/

class Logger{
    struct Deleter{
        void operator()(Logger *p){
            delete p;
        }
    };

    Logger();
    //static Logger *m_Instance; // A este tipo de instancia se le conoce como Lazy instance, solo es creada cuando el metodo loggerObj es llamado
    inline static std::unique_ptr<Logger,Deleter> m_Instance{};
    FILE *m_pStream;
    std::string m_Tag;
    ~Logger(); // Como se vuelve privado el smart pointer no puede acceder al delete, por lo cual es necesario definir un delete propio
public:
    
    Logger(const Logger&) = delete;
    Logger & operator=(const Logger&) =delete;
    void WriteLog(const char *pMessage);
    void SetTag(const char *pTag);    
    static Logger& loggerObj();

};