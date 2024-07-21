#include <stdio.h>

/* Anotaciones para entender el programa "lo hice solo full solo"
1. nunca olvidar declarar la funcion de manera global o local dependiendo del requerimiento
2. en este caso el valor inicial es "z" ya que el requerimiento del ejercicio nos dice que escribamos el alfabeto al revez partiremos de ahi.
3. el final o rango minimo nos dice que la variable debera ser mayor o igual a "a" por lo cual ese seria el limite propuesto por el ejercicio a desarrollar.
4. ya que el limite minimo es "a" y el inicio "z" lo siguiente sera hacer un decremento cada vez que se imprima una letra del avecedario por eso el bucle for.
5. una vez declarado el bucle for lo siguiente sera imprimirlo con la funcion putchar(variable definida por el alfabeto).
*/

int main(void)
{
    char tebahpla;

    for ( tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
    {
        putchar(tebahpla);
    }
    putchar('\n');
    return (0);


}