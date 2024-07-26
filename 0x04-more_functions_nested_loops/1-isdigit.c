#include "main.h"

/** Anotaciones para entender el programa
 * en este caso encontraremos una funcion similar a el ejercicio propuesto anteriormente.
 * el cambio a realizar con el ejemplo anterior es cambiar los rangos para que los numeros del 0 a 9 este dentro del rango dependiendo el valor del entero c que ingresen en el programa main que llama a la funcion que estamos declarando en este programa.
 * en caso de estar dentro del rango retornara un 1.
 * en caso de no estar retornara un 0.  
 */

int _isdigit(int c)
{
    if ( c >= 48 && c <= 57 )
    {
    return(1);
    }
    return(0);
}