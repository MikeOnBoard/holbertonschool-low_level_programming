#include "main.h"

/** Anotaciones para entender el programa
 * para poder entender este ejercicio debemos entender como funcionanlos punteros simples y os punteros dobles en c.
 * y tambien debemos tener conocimiento previo de como  funcionan los punteros dobles en C
 * toda variable que se guarda en la memoria ram del pc asignando espacios especificos dentro de la misma, cada espacio en memoria tendra una direccion para acceder al espacio en memoria sin tener que crear una copia, sino mas bien manipulando el espacio en la memoria del mismo.
 * los puntero se referencian con un asterisco * y la funcion de un puntero sera el de apuntar al espacio en memoria de una variable ya sea un entero, un caracter, un float, un arreglo o una matriz.
 * hay que tener en cuenta que el puntero hacia la variable debera ser del mismo tipo de la misma.
 * ejemplo: int numero = 10; esta variable ya fue declarada y definida, ahora vamos a crear un puntero que se dirigira hacia el espacio de memoria el cual almacena esa variable.
 * para crear el puntero el cual se dirige al espacio en memoria de la variable se creara de la siguiente manera: char *numero1 = &numero, en esta expresion & es el caracter con el cual accederemos a la direccion en memoria de la variable o en caso de ser  u puntero doble accedera a la direccion de memoria del puntero simple de la misma manera.
 *  **ptrDoble = &ptrSimple de esta manera el valor de **ptrDoble sera la direccion en meroria que apunta a *ptrSimple el cual tendra el valor de la direccion en memoria que apunta al espacio en memoria de la variable numero.
 * en este ejercicio nos piden cambiar la direccion en memoria a la cual apunta el puntero doble por el puntero objetivo.
 * en este caso s0 sera apuntado por *to y s1 sera apuntado por *s1 que a su ves sera apuntado por **s
 * por lo cual queremos que **s termine apuntando a *to.
 * para hacerlo cambiaremos el puntero al cual apuntara **s.
 * la forma de expresarlo dentro del programa sera *s(el cual es **s) = to(el cual es *to) esto se escribe sin un asterisco ya que asi esta construido c, de esa manera impicita c tomara ambos valores como sus correspondientes.
 * agora **s no sera igual a *s1 sino a *to
 * conclusiones de este programa:
 * el lio o la razon por la cual me confundia era por la manera de crear un puntero o asignarle un valor al mismo
 * otro punto que me confundia era la forma en la que el lenguaje iplicitamente reconoce que estamos hablando de **s y de *to escribiendolos sin el asterisco.
 * los valores de el string original seran definidos desde la funcion principal. 
 * ninguna variable sin importar si es un puntero doble o un puntero simple deberan tener nombres distintos.
 */

void set_string(char **s, char *to)
{
    *s = to;
}