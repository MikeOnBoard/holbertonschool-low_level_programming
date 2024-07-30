#include "main.h"

/** Anotaciones para entender el programa
 * lo que el ejercicio requiere es comparar una string con otra y retornar un entero dependiendo de si la string 1 es menor o mayor a la segunda o si es igual
 * para poder compararlos debemos buscar la longitud de ambos string
 * esto lo haremos por medio del bucle while para cada una de las string.
 * para ello declararemos dos variables de tipo entero, las cuales tomaran el valor inicial de 0 y serviran para iterar sobre cada uno de los caracteres del string y asi despues de tener la longitud de cada uno procederemos a compararlos.
 * para ello crearemos condicionales if
 * el primer caso sera si ambos son iguales, debera retornar un 0 
 * el segundo caso nos dira wue si el string 1 es menor al 2 nos retornara el numero -15.
 * si ninguna de las dos condiciones se cumplen, de otro moso retornara el valor de 15.
 * ya que el tipo de la funcion es int, debera devolver un valor del mismo tipo.
 * de esta forma cualquiera de los casos nos dara el resultado esperado.
 * y asi damos por terminado el ejercicio y el codigo del mismo.
 */

int _strcmp(char *s1, char *s2)
{
    int longitud1 = 0, longitud2 = 0;
    while ( s1[longitud1] != '\0')
    {
        longitud1++;
    } 
    while ( s2[longitud2] != '\0')
    {
        longitud2++;
    } if ( longitud1 == longitud2 )
    {
        return(0);
    } else if (longitud1 < longitud2)
    {
        return(-15);
    } else 
    return(15);
}