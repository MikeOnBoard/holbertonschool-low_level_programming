#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 * Anotaciones
 * dentro de la funcion vemos que hay un r = print_sign(senal deseada a imprimir) lo cual nos especifica la connotacion en el codigo ASCII.
 * las senales 0xff y -1 indican: la connotacion hexadecimal que indica el numero 255 en el codigo ASCII y la segunda senal indica un codigo nulo o sin descripcion, dando como resultado / al no estar representado denrto del codigo ASCII.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}