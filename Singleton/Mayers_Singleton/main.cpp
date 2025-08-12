#include "logger.h"

void OpenConnection(){
    Logger &lg = Logger::loggerObj(); //Si no se usa &, el compilador llama al copy constructor por defecto realizando un shallow copy, lo cual genera copias del
    //puntero, por lo cual cuando la función termina, el puntero es eliminado por el destructor, quedando un dangling pointer y haciendo fallar el programa.
    //Por ello es necesario eliminar el copy constructor y el operator= para evitar este tipo de copias. Tambien se puede hacer uso de move semantics, pero depende
    //del caso de uso
    lg.WriteLog("Attemptong open a connection");
}


int main(){
    std::thread t1 ([](){
        
        Logger &lg = Logger::loggerObj();
        lg.WriteLog("Thread 1 was created");
    });
    std::thread t2 ([](){
        Logger &lg = Logger::loggerObj();
        lg.WriteLog("Thread 2 was created");
    });
    t1.join();
    t2.join();
    /*
    Logger &lg = Logger::loggerObj();
    lg.SetTag("Pepito"); 
    lg.WriteLog("Appicatiopn is shutting down");
    OpenConnection();
    */
    return 0;
}