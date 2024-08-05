#include "main.h"
#include <stdio.h>

/** Anotaciones para entender el programa
 * las anotaciones de este programa seran sustituidas en un futuro para poder avanzar y mas adelante entender el codigo y el porque de manera clara.
 * 
 */

void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    for ( i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size + (size - 1 - i)];
    }
    printf("%d, %d\n", sum1, sum2);
}