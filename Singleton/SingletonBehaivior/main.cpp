#include "clock.h"
#include <iostream>

/**
 * Esta es una clase que tiene un comportamiento de singleton, por lo cual 
 * todos las instancias que se creen de la clase estaran sincronizadaas y 
 * contendran el mismo valor para cada instancia, por lo cual, si bien no es 
 * un singleton, se comporta como tal debido a su sincronización con reloj del sistema
 */
int main(){
    Clock clk;
    Clock clk2;
    Clock clk3;
    Clock clk4;
    std::cout << clk.GetTimeString();
    std::cout << clk2.GetTimeString();
    std::cout << clk3.GetTimeString();
    std::cout << clk4.GetTimeString();
}