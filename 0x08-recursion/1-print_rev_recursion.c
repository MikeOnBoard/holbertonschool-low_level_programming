#include "main.h"

/**
 * 
 */

void _print_rev_recursion(char *s)
{   
    char *prt = s + 13;
    if ( *prt )
    {
        _putchar( *prt );
        _print_rev_recursion( s - 1 );
    } 
    
}