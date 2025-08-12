#include "clock.h"
#include <iostream>

/**
 * Esta es una implementación donde si se crean multiples instancias, cada una de ellas
 * tendrá los mismos member variables debido a las propiedades estáticas de las variables
 * En el comportamiento singleton, cada instancia posee sus propias member variables
 * Este es el monostate, no hay instancias, los métodos son accedidos directamente desde
 * la clase
 */
int main(){
    std::cout << Clock::GetTimeString();
}