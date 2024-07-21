#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones para poder entender el programa
1. al tratarse de char en vez de int usando la funcion putchar se deben implementar las comillas simples('') para definir la variable numberz y asi mismo para darle el rango.
2. siendo la declaracion completa dentro del bucle for, no habra necesidad de colocar las llaves de entrada y de salida {}.
*/

int main(void)
{
    char numberz;

    for ( numberz = '0'; numberz <= '9'; numberz++)
    putchar(numberz);
    putchar('\n');
    return (0);

}