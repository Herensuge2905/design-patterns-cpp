## Que sucede?

Igual al basic example en estructura, sin embargo, en este caso a la clase *Creator*
se le da una función virtual *Create*, la cual retorna el puntero a un objeto de una
clase superior, permitiendo el retorno de todas las clases que hereden de dichas clases
superiores.
Con esto ya no es necesario especificar el nombre, y simplemente, se requiere de construir
otra clase que use dicho metodo para regresar el la subclase deseada.
Las clases creadoras son *concreteCreator* y *concreteCreator2*

