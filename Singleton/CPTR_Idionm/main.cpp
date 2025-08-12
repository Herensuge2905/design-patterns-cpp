#include "CRTPSingleton.h"
#include "logger.h"

// Por medio del uso de CPTR a través de la herencia, casi cualquier clase puede convertirse en un singleton
class GameManager : public BaseSingleton<GameManager>
{
private:
    MAKE_SINGLETON(GameManager)
public:
    void LoadAssets()
    {
        std::cout<<"Executing the loadAssets"<<std::endl;
    }   
    void Run()
    {

    } 
};

void OpenConnection(){
    Logger &lg = Logger::Instance(); //Si no se usa &, el compilador llama al copy constructor por defecto realizando un shallow copy, lo cual genera copias del
    //puntero, por lo cual cuando la función termina, el puntero es eliminado por el destructor, quedando un dangling pointer y haciendo fallar el programa.
    //Por ello es necesario eliminar el copy constructor y el operator= para evitar este tipo de copias. Tambien se puede hacer uso de move semantics, pero depende
    //del caso de uso
    lg.WriteLog("Attemptong open a connection");
}


int main(){
    GameManager &gm = GameManager::Instance();
    //GameManager gm2 = gm; 
    gm.LoadAssets();


    std::thread t1 ([](){
        
        Logger &lg = Logger::Instance();
        lg.WriteLog("Thread 1 was created");
    });
    std::thread t2 ([](){
        Logger &lg = Logger::Instance();
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