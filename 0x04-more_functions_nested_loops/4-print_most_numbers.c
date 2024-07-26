#include "main.h"

/** Anotaciones para entender el programa
 * basandonos en el programa anterior que requeria imprimir los numeros 
 * usaremos el mismo metodo, aniadiendo un condicional
 * el condicional segun nel ejercicio propuesto nos indica que no deben imprimirse los numeros 2 y 4por lo que el condicional actuara de manera que dentro del rango que sean distindos a 2 y 4(siendo estos excluidos de la impresion) seran impresos.
 */

void print_most_numbers(void)
{
    char numbers;
    for ( numbers = '0'; numbers <= '9'; numbers++)
    {
    if ( numbers != '2' && numbers != '4')
    {
    _putchar(numbers);
    }
    }
    _putchar('\n');
}