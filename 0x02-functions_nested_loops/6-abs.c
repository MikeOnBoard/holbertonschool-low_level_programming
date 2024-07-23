#include "main.h"

/** Anotaciones para comprender el programa
 * valor absoluto: el valor absoluto de un entero es su mismo valor sin signos sin importar su valor ya que se encontrara a la misma distancia de 0
 * sabiendo eso nos encontramos con que si el valor del entero ingresado en este caso es menor a cero se multiplicara por -1 ya que al multiplicarse por -1 se anulan los signos y dara el mismo valor pero en positivo.
 * ded lo contrario si el numero ingresado es positivo nos dara el mismo resultado. return(c);
 */

int _abs(int c)
{
    if ( c < 0)
    {
    int abs_val;

    abs_val = c * -1;
    return (abs_val);
    }
    return (c);
}