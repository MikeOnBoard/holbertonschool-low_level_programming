#include "main.h"

/** Anotaciones para entender el programa
 * nuevamente nos encontramos en unejercicio de tipo string.
 * aqui unicamente declararemos dos variables.
 * int longitud, iterara sobre la longitud del array.
 * int i la cual iterara sobre el bucle for en el rango longitud, y incrementando en cada vuelta un digito.
 * como siempre en estos ejercicios empezaremos con un bucle while, el cual se usara para encontrar la longitud del string.
 * una vez hallada la longitud del string y fuera del bucle while, iteraremos con un bucle for el codigo.
 * el bucle for tendra un rango maximo definido por el valor de la variable longitud.
 * dentro del bucle for tendre mos un condicional if el cual iterara con i referenciada por una ecuacion = (longitud(9) -1) / 2 : 9 -1 = 8 / 2 = 4.
 * una vez sabiendo que la mitad del string es 4 el condicional nos dira que mientras i sea mayor a la mitad en este caso 4 imprimira cada caracter dentro de la longitud del string.
 * como resultado empezara a imprimir los caracteres a partir de la posicion 5, lo cual nos da como resultado:
 * 56789 hasta llegar al limite del rango = 9, e imprimiendo una nueva linea una vez haya salido del bucle for y haya impreso todos los caracteres del array.
 * dando or termindo el ejercicio propuesto.
 */

void puts_half(char *str)
{
    int longitud = 0, i;
    while ( str[longitud] != '\0')
    {
        longitud++;
    }
    for ( i = 0; i < longitud; i++)
    {
        if ( i > (longitud -1) / 2)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}