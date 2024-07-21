#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones de programa
- dependiendo del numero elegido sera dividido por el modulo de 10 y asi mismo sera impreso por la funcion printf.
- para la funcion printf el especificador de formato %d: imprime un entero decimal.
- para el especificador de formato tambien tenemos unas reglas, como se evidencio en cada linea se menciona %d dos veces, las cuales hacen referencia fuera de las comillas a las variables 1. n, 2. lastd como guia si se especifica un especificador de formato dentro de print f, se debe ingresar el valor del mismo, en este cado ambos %d serian n y lastd.
*/

int main(void) 
{
    int n, lastd;

    srand(time (0));
    n = rand() -RAND_MAX / 2;
    lastd = n % 10;

    if ( lastd > 5 )
    {
        printf("Last digit of %d is %d is grater than 5\n", n, lastd);
    }
    else if (lastd == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, lastd);
    }
    else if ( lastd < 6 && lastd != 0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
    }
    return (0);
}