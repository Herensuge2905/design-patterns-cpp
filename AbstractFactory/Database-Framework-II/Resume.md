## COmpilación

Para poder compilar los archivos se debe agregar el archivo CMakelists.txt.

Luego se crea la carpeta build
```cmd
mkdir build
```

Se buildea el proyecto de modo clásico. y se compila con minGW32-make, un make para windows que se encuentra en MinGw

```cmd
cd build
cmake .. -G "MinGW Makefiles"
minGW32-make
```

## Problemas

Esta si es la implementación del Abstract factory method, en este caso al pasar solo el objeto de la clase
determinada, como solo es la instanciación de solo una clase en todo el runtime, no hay posibilidad de crear objetos diferentes para
realizar dicha conexion asegurandose así la creación de las instancias requeridas para realizar la conexión.

Debido a que solo se usa una implementación del factory, este debe ser implementado como un singleton.


## Pros

 - Acoplamiento sencillo
 - Escalabilidad y soporta mas configuraciones a futuro
 - Mantiene la consistencia de la aplicacion y solo se pueden obtener instancias de un mismo set al tiempo.


 ## Cons

 - Añadir nuevos productos resulta complicado
 - Si se realiza un cambio en la clase abstracta, fuerza a los hijos  a realizar cambios
 - Añadir una nueva clase causa class explosión, para añadir una nueva db se tienen que crear clases de conección, comando etc.

 ## Abstract vs factory

 - Abstract Permite la creación de familias independiente de sus tipos concretor / Factory no
 - Abstract su creación depende del tipo de factory usado /  Las subclases administran la creación del tipo en concreto
 - Abstract muy dificil extender la clase para soportar nuevos productos / Realmente facil agregar
 - Abstract, las factories son singleton / Pueden ser multitopne

 ## Cuando usar

 - Cuando no se desea exponer clases al cliente
 - Se desea diseñar un sistema con uno de los multiples configuraciones de productos
 - Es necesario asegurar el uso de familias clases a la vez, o sea solo un set, o set 1 o set2 sin que estos se crucen


