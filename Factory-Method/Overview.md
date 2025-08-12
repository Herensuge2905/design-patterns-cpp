
## Overview

La idea de este patrón de diseño es el crear una interface para la creación de objetos,
pero permitiendo que las subclases decidan que clase instanciar.
 
## Formas de implementación.

- Crear un método virtual que permita ser sobre escrito y retorne una instancia de una clase o una subclase.
- Debe comportarse como un constructor
- En el factory method es posible retornar instancias de cualquier sub tipo
- Otro nombre asignado a este patrón es el de Virtual Constructor.

##