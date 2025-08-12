#include "localPrinter.h"

/**
 * El problema que se observa en este modo de implementación básica es que se usa el nombre
 * de la clase directamente para ejecutar las funciones. por lo cual, no sigue el principio de 
 * inversion de dependencias, haciendo de este un código complejo de modifficar
 */

void PrintSales()
{
    LocalPrinter::GetInstance().Print("Sales Data");
}

int main(){
    auto &p = LocalPrinter::GetInstance();
    p.Print("Printing the data from local printer");
    PrintSales();
    return 0;
}