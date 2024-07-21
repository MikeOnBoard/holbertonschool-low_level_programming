#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones para comprender el programa
1. para anclar y definir la tercera variable se debe ingresar un bucle for dentro de los otros dos ingresados anteriormente.
*/

int main(void)
{
    int i, d, c;

    for ( i = '0'; i <= '9' ; i++)
    {
    for ( d = i + 1; d <= '9' ; d++)
    {
    for ( c = d + 1; c <= '9' ; c++)
    {
    if (i != d )
    {
    putchar(i);
    putchar(d);
    putchar(c);
    if (i == '7' && d == '8' && c == '9' )
    continue;
    putchar(',');
    putchar(' ');
    }       
    }
    }
    }
    putchar('\n');
    return(0);
}