#include "main.h"

/**
 * Anotaciones para entender el programa realizado
 * en este caso las letras sean mayusculas(segun codigo empiezan antes de las minusculas) o minusculas estan dentro de un rango y si es un caracter estaran fuera del mismo.
 * solamente se ha cambiado el rango de 96 a 65 y se ha mantenido el 122 para especificar el rango en el cual se encuentran las letras.
 */

int _isalpha(int c)
{
    if ( c >= 65 && c <= 122 )
    {
    return(1);
    }
    return(0);
}