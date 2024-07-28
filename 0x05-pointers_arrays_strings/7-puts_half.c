#include "main.h"

/** Anotaciones para entender el programa
 * 
 * 
 */

void puts_half(char *str)
{
    int longitud = 0, i;
    while ( str[longitud] != '\0')
    {
        longitud++;
    }
    for ( i = 0; i < longitud; i++)
    {
        if ( i > (longitud -1) / 2)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}