## que sucede?

Esta implementación resuelve el hecho de tener que crear clase y lo convierte en algo 
trivial como lo es agregar case a un IF en la clase *DocumentFactory*
En este caso haciendo la función statica, lo convierte en un monostate.
Esto es parametrizado, debido a que dependiendo de un parámetro de entrada. la
instanciación es generada

Si se necesita copiar el objeto o manejar copias, se debo usar 
std::make_shared.