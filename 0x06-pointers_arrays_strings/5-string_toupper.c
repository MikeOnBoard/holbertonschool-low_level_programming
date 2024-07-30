#include "main.h"

/**
 * 
 * 
 */

char *string_toupper(char *str)
{
    char *temp = str;
    for ( ; *str != '\0' ; str++)
    {
        if ( *str >= 'a' && *str <= 'z' )
        {
            *str -= 32;
        } 
    }
    str = temp;
    return str;
}