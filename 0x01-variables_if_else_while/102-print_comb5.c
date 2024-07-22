#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones
- por el momento no hay.
*/

int main(void)
{
    int i, d;

    for ( i = 0; i <= 98 ; i++)
    {
    
    for ( d = i + 1; d <= 99 ; d++)
    {
    putchar((i / 10) + '0');
    putchar((i % 10) + '0');
    putchar(' ');
    putchar((d / 10) + '0');
    putchar((d % 10) + '0');
    if (i == 98 && d == 99 )
    continue;
    putchar(',');
    putchar(' ');
    }       
    }
    putchar('\n');
    return(0);
}