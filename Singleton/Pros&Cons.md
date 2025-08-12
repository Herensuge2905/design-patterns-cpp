## Pros
- la clase permite el control del proceso de instanciación
- Permite la creación de multiples instancias (Pero estan limitadas) multitone
- Mejor que variables globakes
- Puede ser sub claseada

## Cons
- Es muy dificil de testear, no es posible reemplazar por un mock
- Double check lock pattern puede llegar a fallar a la hora de asegurar una función thread safe
- Los destructores de los Lazy instance pueden llegar a ser complejos.

## Cuando usar?
- Cuando la creación de múltiples isntancias pueden generar corrupción de datos
- Cuando se maneja un estado global o un estado compartido.
- No se requiere de multi instanciación.
