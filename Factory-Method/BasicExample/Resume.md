## Que sucede?

En este ejemplo existe una clase abstracta *Product* la cual puede ser heredada por otras clases.
como lo es *concreteProduct*, una vez heredada esta puede llamar a su método modificandolo ya que es.
una clase abstracta.
Ahora bien, la clase creator crea instancia de los objetos por medio del puntero del tipo _product_
Sin embargo, en cada instanciación, es necesario tener el nombre de la subclase a instanciar. Por ello
entra en juego el patrón de diseño de factory.

