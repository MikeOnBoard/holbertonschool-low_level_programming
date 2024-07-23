#include "main.h"

/** Anotaciones para seguir con el problema
 * la entrada de valor en este caso es c, por lo cual se crea otra variable para obtener el modulo del mismo
 * tengase en cuenta que el modulo de cualquier entero positivo sera su ultimo digito.
 * en este caso hay una entrada de valor _putchar(0 + r) definiendo r previamente pero agregando un 0 a la funcion _print_last_digit(-1024).
 * para resolver ese inconveniente se anade la linea de codigo _putchar(last + '0') la cual es similar a la que esta en el archivo main con la diferencia que se reemplaza la variable r por la variable last.
 */

int print_last_digit(int c)
{
    int last;
    
    last = c % 10;
    if ( last < 0)
    {
    last = last * -1; 
    } 
    _putchar(last + '0');
    return(last);
}