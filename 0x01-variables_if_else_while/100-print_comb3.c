#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones para comprender el programa
1. ya que son dos digitos los que se imprimiran en la consola, 2 variables deberan ser declaradas.
2. para anclar la variable d a la variable i y declararla, se introdujo una funcion for dentro de la primera que declara la variable i.
3. hay que tener en cuenta los errores de identacion para que los comandos de verificacion de errores gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3 no presente ningun error a la hora de crear un archivo ejecutable.
*/

int main(void)
{
    int i, d;

    for ( i = '0'; i <= '9' ; i++)
    {
    
    for ( d = i + 1; d <= '9' ; d++)
    {
    if (i != d )
    {
    putchar(i);
    putchar(d);
    if (i == '8' && d == '9' )
    continue;
    putchar(',');
    putchar(' ');
    }       
    }
    }
    putchar('\n');
    return(0);
}