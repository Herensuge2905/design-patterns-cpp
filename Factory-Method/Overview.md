
## Overview

La idea de este patrón de diseño es el crear una interface para la creación de objetos,
pero permitiendo que las subclases decidan que clase instanciar.
 
## Formas de implementación.

- Crear un método virtual que permita ser sobre escrito y retorne una instancia de una clase o una subclase.
- Debe comportarse como un constructor
- En el factory method es posible retornar instancias de cualquier sub tipo
- Otro nombre asignado a este patrón es el de Virtual Constructor.

## Pros
- Instancias creadas en runtime
- Promueve una integración sencilla
- La construcción se vuelve sencilla debido a la absatracción
- El proceso de construcción esta encapsulado
- Es muy util para crear object pools

## Cons
- Cada clase de nuevo producto requiere de una correspondencia de un factory class (Parametrized reduce esto)

## Cuando usar

- No se tiene una claridad absoluita a cerca de que instancias se requeriran durante runtime.
- La clase no requiere de depender de las clases en concreto que se usan.
- Cuando se desea encapsular el proceso de creación.
- Cuando no se sabe que clases seran o no implementadas en un futuro.

## Nota

No es necesario crear clases para implementar este metodo, se puede hacer uso de funciones o de templates
para retornar instancias de la clase, por ello es tan flexible y habilitado en C++ un ejemplo de esto
es la función Make