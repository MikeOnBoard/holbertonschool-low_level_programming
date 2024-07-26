#include "main.h"

/** Anotaciones para entender el programa
 * 
 */

void print_numbers(void)
{
    char numbers;
    for ( numbers = '0'; numbers <= '9'; numbers++)
    {
    _putchar(numbers);
    }
    _putchar('\n');
}