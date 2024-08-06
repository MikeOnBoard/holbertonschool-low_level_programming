#include "main.h"

/** Anotaciones para entender el programa
 * de nuevo como hemos visto en ejercicios anteriores sobre recursion, se debe tener en cuenta las condiciones sobre las cuales se trabjara la funcion y asi mismo con cuales se hara la llamada recursiva de la misma.
 * en este caso solo explicare la condicion en la cual se hara la llamada recursiva, debido a que no se realiza una accion previa a la llamada recursiva de la funcion.
 * la llamada se hara hasta que y llegue al estado base, el cual seria y = 0, una vez ahi empezara a retornar hasta llegar a la primera llamada realizada, la cual seria y en su valor original.
 * dicho esto, en cada retorno se multiplicara x * x y acumulando su valor hasta llegar a la primera llamada siendo x multiplicado por las veces que ya ha sido multiplicando previamente.
 * ej 2^3
 * 1 se hace la llamada a la funcion hasta que llega a la condicion cuando es y = 0
 * de vuelta retornando las llamadas realizadas seria 2 * 0 cuando y es 0 = 1(valor que se guardara)
 * cuando y es 1 sera 2 * 2 = 4
 * cuando y es 2 sera 2 * 4  = 8 
 * cuando y es 3 ultima llamada sera 2 * 8 = 16 y asi retornando el valor de 2^3.
 * asi funcionara la funcion cuando y sea mayor a 0.
 * conclusiones para este programa:
 * tengo entendidas las condicionales para que la funcion sea bien ejecutada.
 * en este caso me costo entender el modo de retorno como es guardado el resultado el resultado anterior, pero poco a poco voy entendiendo un poco mas como funciona el retorno de las llamadas recursivas de una funcion.
 * en este caso y seria las veces en las que se haria la llamada a la funcion.
 * asi cumpliendo con lo estipulado en el programa.
 */

int _pow_recursion(int x, int y)
{
    if ( y == 0)
    {
        return (1);
    }
    if ( y > 0 )
    {
    return x * _pow_recursion( x, y - 1 );
    }
    return (-1);
}