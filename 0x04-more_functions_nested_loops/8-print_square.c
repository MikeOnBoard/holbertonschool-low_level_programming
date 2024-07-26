#include "main.h"

/** Anotaciones para entender el programa
 * en este caso nos entregan un entero el cual sera iterado entregando el caracter # del tamanio size y con la misma cantidad del size.
 * al tratarse de la misma cantidad, ambos for iteraran sobre el mismo entero.
 * dentro del ultimo simplemente colocaremos los datos que deseamos imprimir con la funcion _putchar.
 * cuando la condicion de que el numero iterado sea 0 o menor simplemente imprimira una nueva linea.
 */

void print_square(int size)
{
    int multiplicacion, rangoNumero;
    if ( size > 0 )
    {
        for ( multiplicacion = 1; multiplicacion <= size ; multiplicacion++)
        {
            for ( rangoNumero = 1 ; rangoNumero <= size ; rangoNumero++)
            {
                _putchar(35);
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}