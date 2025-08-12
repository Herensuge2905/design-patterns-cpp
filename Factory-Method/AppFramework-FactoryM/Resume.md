## que sucede?

Mismo que en el caso sin el factory method, la cosa en este caso es que *Application* tiene
un metodo vitual de _Create_, el cual permite la instanciación de cualquier subclase
Ahora bien, para poder realizar dicha instanciación, es necesario crear una clase,
en este caso *CreateText* el cual hereda de *Application* y sobre escribe el método
_Create_ Para realizar instancias de las clases deseadas, en este caso de *TextDocument*

## Problema

Cuando se destruyen las instancias??, no lo hacen en esta implementación, por ello es 
necesario realizar la modificación para permitir el uso de los smart pointers, y que 
una vez fuera del scope, el objeto sea destruido.
