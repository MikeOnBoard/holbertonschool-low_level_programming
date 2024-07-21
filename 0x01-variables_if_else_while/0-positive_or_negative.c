#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Anotaciones del programa:
-todo final de funcion debe llevar coma solo en caso de que no lleve llaves de apertura{}.
- en el else final al no tener if(definase como funcion que realiza una accion en el contenido de los parentesis), simplemente se colocaran las llaves de entrada y salida {} para declarar el else.
*/

int main(void) 
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n == 0)
    {
        printf("%d is cero\n", n);
    } else {
        printf("%d is negative\n", n);
    }
    return (0);
}