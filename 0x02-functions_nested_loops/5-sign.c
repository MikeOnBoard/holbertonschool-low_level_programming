#include "main.h"

/** 
 * Anotaciones para entender el programa
 * dependiendo del entero ingresado imprimiremos el signo correspondiente o si es 0 el numero 0.
 * como vemos hay teres valore en numero el 43, el 45 y el 48 que corresponden a el signo positivo, el 0 y el signo negativo.
 * segun el ejercicio y aprovechando la palabra reservada return podremos colocar ya sea 1, -1 o 0.
 */

int print_sign(int n)
{
    if ( n > 0 )
    {
        _putchar(43);
        return (1);
    } 
    else if ( n < 0 )
    {
        _putchar(45);
        return(-1);
    }
    else
    {
        _putchar(48);
        return(0);
    }
}