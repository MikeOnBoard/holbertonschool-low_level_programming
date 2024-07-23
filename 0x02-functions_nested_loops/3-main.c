#include "main.h"

/** El segundo asterisco seguido del slash agregara a cada linea nueva un asterisco al inicio de la linea.
 * main - check the code.
 *
 * Return: Always 0.
 * Anotaciones para entender el codigo
 * ya mencionado y entendido que el entero estara entre el rango de caracteres definido en el codigo ASCII, veamos su aclaracion
 * la 'H' no entra dentro del rango del 97 al 122 por lo cual devolvera 0.
 * la 'o' esta en el rango del 97 al 122 por lo cual devolvera 1.
 * el entero 108 visto en el codigo ASCII entra dentro del rango 97 a 122 y senala la letra l minuscula, siendo asi la respuesta 1.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}