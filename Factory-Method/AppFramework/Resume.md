## que sucede?

En este caso la clase *Application* es la que cumple la función de framework,
sin embargo depende totalmente de textDocument y cada vez que se requiea instanciar una 
clas diferente a la asignada, es necesario cambiar la clase framewor.
para solucionar esto, se puede hacer uso del Factory method, para lograr crear 
instanciias de otros tipos de documentos sin tener que modificar todo el código
fuente.
