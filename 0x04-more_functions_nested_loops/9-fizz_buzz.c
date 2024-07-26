#include <stdio.h>
#include "main.h"

/** Anotaciones para entender este programa
 * 
 */

int main(void)
{
    int numero;
    for ( numero = 1; numero <= 100; numero++)
    {
        if (numero % 3 == 0 && numero % 5 == 0)
        {
            printf("FizzBuzz");
            printf(" ");
        }
        else if (numero % 5 == 0)
        {
            printf("Buzz");
            printf(" ");
        }
        else if ( numero % 3 == 0)
        {
            printf("Fizz");
            printf(" ");
        }
        else
        {
            printf("%d", numero);
            printf(" ");
        }   
    }
    printf("\n");
    return(0);
}