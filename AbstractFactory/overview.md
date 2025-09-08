## Descripción

Este patrón de diseño busca proveer una interfaz para la instanciación de clases pertenecientes a un mismo SET,
esto se debe asegrar ya que estas clases son dependientes una de otras.

## Implementación

- Se crea un abstract factory que sirva como interfaz para definir la creación de diferentes productos
- Se añaden sub factorias dependiendo de cada contexto
- Todas las factorias heredan de la clase abstracta
- Cada una de las factorias crea instancias de las clases de su correspondiente contexto
- Solo una factoria debe ser usada en toda la aplicación por medio de la referencia de la clase abstracta.
