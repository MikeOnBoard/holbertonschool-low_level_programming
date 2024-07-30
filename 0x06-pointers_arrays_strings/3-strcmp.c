#include "main.h"

/**
 * 
 * 
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