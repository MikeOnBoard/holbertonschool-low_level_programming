#include "main.h"

/** Anotaciones para entender este programa
 * 
 * 
 * 
 */

void times_table(void)
{
    int fila, columna, c, d, e;

    for ( fila = 0; fila <= 9; fila++)
    {
        for ( columna = 0; columna <= 9; columna++)
        {
            c = fila * columna;
            if (c > 9)
            {
                d = c % 10;
                e = (c - d) / 10;
                _putchar(44);
                _putchar(32);
                _putchar(e + '0');
                _putchar(d + '0');
            }
            else
            {
            if ( fila != 0)
            {
                _putchar(44);
                _putchar(32);
                _putchar(32);
            }
            _putchar(c + '0');
            }    
        }
        _putchar('\n'); 
    }
}