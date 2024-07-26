#include "main.h"

/** Anotaciones para entender el programa
 * en este programa usaremos una variable de tipo char, ya que como su nombre lo indica la funcion putchar imprime un caracter o caracteres no enteros.
 * al tratarse de caracteres el rango del bucle for que estamos usando en este programa debe ser de tipo caracter.
 * al final la opcion putchar imprimira cada uno de los numeros del 0 al 9.
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