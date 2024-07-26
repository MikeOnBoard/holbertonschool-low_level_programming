#include "main.h"

/** Anotaciones para entender y recordar el programa...nunca hay que dejar de hacer las anotaciones, el entendimiento es mas poderoso que el saber, si escribo la informacion sin un sentido de entendimiento, es igual que si no supiera absolutamente nada!.
 * el entero c es recibido a modo de numeral del codigo ASCII.
 * este nos indica que los caracteres que sean ingresados en el programa que haga el llamado a la funcion seran tomados como caracter del mismo codigo ASCII.
 * las letras mayusculas se encontraran en el rango de 65 al 90.
 * el condicional if nos dice que hay dos operadores relacionales(>= y <=) y uno logico(&&), y nos dice que si el entero c se encuentra dentro de este rango sera una letra mayuscula.
 * en caso de que sea una letra mayuscula nos retornara un 1.
 * dado el caso que el caracter no se encuentre en este rango efectuara la instruccion que esta por fuera del condicional if.
 * el cual nos retornara un 0
 * el resultado del programa sera:
 * A : 1
 * a : 0
 */

int _isupper(int c)
{
    if ( c >= 65 && c <= 90)
    {
    return(1);
    }
    return(0);
}