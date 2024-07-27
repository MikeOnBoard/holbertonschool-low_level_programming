#include "main.h"

/** Anotaciones para entender el programa
 * al acceder al valor de *n estamos accediendo al valor guardado en el slot de memoria original del entero n.
 * al final solo hay que definir nuevamente el puntero, cambiando su valor a 98.
 */

void reset_to_98(int *n)
{
    *n = 98;
}