#include "main.h"

/** Anotaciones para entender el programa
 * para entender el codigo hay que tener en cuenta de nuevo la pila de llamadas 
 * ademas de que debido a que es una funcion de tipo int, debera retornar un valor entero.
 * una vez entendido esto procederemos a desglosar linea por linea del codigo.
 * el condicional que usaremos sera el que se ha usado para este tipo de ejercicios, if ( *s )
 * dentro del condicional tendremos dos puntos clave, el primero sera retornar 1 
 * el segundo sera la llamada recursiva por medio de _strlen_recursion(s + 1)
 * para que no haga solo la llamada devolviendo 0 se deberan sumar estas dos expresiones.
 * return 1 + _strlen_recursion(s + 1)
 * de esta manera se hara la llamada recursiva hasta llegar al caso base, en otras palaras hasta llegar a la condicion.
 * una vez llegado a la condicion del if, la llamada empezara a retornar en si misma pero esta vez sumando el valor de 1
 * en el primer retorno el valor sera 0 por lo cual se sumara el 1, en el segundo llamado sera de 1, + 1 retornara 2, y asi sucesivamente hasta que haya retornado hasta la primera llamada.
 * dando asi el valor de 13 + 1 = 14 la cual es la longitud total de la cadena.
 * Conclusiones obtenidas del ejercicio:
 * es muy importante tener en cuenta la llamda recursiva y el retorno dado el caso necesario en ambos sentidos.
 * ya que la funcion es de tipo entero se debera retornar un entero, ese es uno de los fines de return 1.
 * si no se da el caso se retornara 0.
 */

int _strlen_recursion(char *s)
{
    if (*s)
    {  
        return 1 + _strlen_recursion(s + 1);
    }
    return (0);
}