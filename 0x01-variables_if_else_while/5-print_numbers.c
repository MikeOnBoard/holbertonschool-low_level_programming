#include <stdio.h>

/* Anotaciones para este programa
1. al tratarse de numeros no se puede usar la funcion putchar, mi tampoco la funcion puts, solo la funcion printf.
2. en la primera linea de printf introducimos el especificador "%d" que se usa para imprimir un entero, ademas de introducir la variable numbers que en esrte caso fue definida por el rango de 0 hasta 9 al inicio de la funcion for.
*/

int main(void)
{
    int numbers;
    for ( numbers = 0; numbers < 10 ; numbers++)
    printf("%d", numbers);
    printf("\n");
    return (0);

}