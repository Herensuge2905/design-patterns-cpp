## Problema


El problema con esta implementación radica en el shallow copy, al
definir por defecto un copy constructor, a la hora de destruir los objetos
libera la memoria de objetos que estan haciendo uso de la misma llevando la
terminación a un dangling pointer, el cual crasheará la finalización del programa.
