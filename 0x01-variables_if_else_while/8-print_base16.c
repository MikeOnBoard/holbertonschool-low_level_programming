#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Consideraciones para con este programa
1. verificar que dentro de las funciones esten las variables correctas, ya que al inicio presente un problema y no revise bien el codigo pensando que todo habia salido a la perfeccion.
*/

int main(void)
{
    
    char numer; 
    char letr;

    for( numer = '0' ; numer <= '9'; numer++)
    {
    putchar(numer);
    }
    for( letr = 'a'; letr <= 'f'; letr++)
    {
        putchar(letr);
    }
    
    putchar('\n');
    return (0);

}