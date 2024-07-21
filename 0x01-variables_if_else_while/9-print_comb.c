#include <stdio.h>

/* Anotaciones a tener en cuenta para entender y realizar este programa
1. dentro del bucle for se pueden realizar condicionales, que actuan directamente sobre la variable declarada.
2. ya que la primera funcion putchar se encuentra antes del condicional if se realiza la escritura de la variable combnum.
3. al realizarse la funcion el condicional nos dice que si el numero es diferente a 9 tendra que realizar las siguientes funciones, siendo estas las de ingresar una coma, y ingresar un espacio en blanco.
4. posterior a ello se cumple el condicional para retornar el bucle for, siguiendo asi la cadena de numeros del 0 hasta llegar al numero 9 y asi romper el ciclo.
5. terminando con el bucle y escribiendo una linea adicional (\n), retornando 0 y finalizando con el programa.
*/

int main(void)
{
    int combnum;

    for( combnum = '0'; combnum <= '9'; combnum++)
    {
        putchar(combnum);
    if (combnum != 9)
    {
        putchar(',');
        putchar(' ');
    }}
    putchar('\n');
    return (0);


}