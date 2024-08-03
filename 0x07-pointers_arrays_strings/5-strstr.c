#include "main.h"

/** Anotaciones para entender el programa
 * para empezar el ejercicio nos pide buscar una subcadena(needle), incluyendo todos sus caracteres, dentro de una cadena principal(haystack), todos los caracteres de needle deben coincidir con los caracteres de haystack.
 * debido al funcionamiento de la funcion original strstr iniciaremos con un condicional que nos devuelve el puntero de la cadena principal si la subcadena esta vacia.
 * lo siguiente que haremos sera iterar sobre los caracteres de la cadena principal mediante un buce while.
 * la condicion sera mientras *haystack exista,  las instrucciones seran las siguientes:
 * crearemos dos variables de tipo char, las cuales iteraran sobre los caracteres de la subcadena y la cadena.
 * para poder iterar sobre los caracteres de ambas encontrando las coincidencias usaremos un bucle while, el cual tendra la siguiente condicion:
 * mientras existan *h &&(operador logico y) *n &&(y ademas de esto) *h == *n mientras ambos caracteres de ambas cadenas sean iguales, ira recorreindo el puntero de la cadena principal al mismo tiempo que recorrera cada uno de los caracteres de la sub cadena.
 * esto con el fin de que si o si los caracteres sean iguales, ademas de que ninguno de ellos llegue al final.
 * una vez llegado al final saldra del bucle y seguira con el condicional despues del while, el cual tiene la siguiente expresion.
 * si *n(la subcadena) ha llegado al final(en otras palabras es el caracter nulo) retornara el puntero donde ha empezado a encontrar las coincidencias.
 * una vez retorne el puntero de haystack habra terminado de ejecutarse la funcion y termina el ejercicio correctamente.
 * conclusiones de este programa:
 * en un principio no entendia la razon por la cual me daba un segmentation fault al momento de compilar el programa y esto se debe a que se manejo directamente el puntero de ambas cadenas.
 * la solcion es crear dos punteros char(*h,*n) los cuales podran interactuar en los caracteres sin afectar el puntero original ya que copea el puntero orignial de las cadenas y accede a los caracteres sin modificar el puntero original.
 * nueva forma de usar un condicional estableciendo existencia o no cero ademas de igualdad mediante la expresion while (*h && *n *h == *n).
 * una vez se encuentra el caracter nulo de n se da por terminada la funcion y no es necesario continuar buscando caracteres aun asi no haya terminado de buscar dentro de la cadena principal ya que la que interesa es la subcadena.
 * cuando se encuentra toda la subcadena deja de tener sentido la busqueda, esa es la funcionalidad de la funcion strstr original.
 */

char *_strstr(char *haystack, char *needle)
{
    if (*needle == '\0') {
        return haystack;
    }
    while (*haystack) {
        char *h = haystack;
        char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;
        }
        haystack++;
    }
    return '\0';
}