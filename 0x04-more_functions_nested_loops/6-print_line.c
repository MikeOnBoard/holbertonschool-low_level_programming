#include "main.h"

/** Anotaciones para entender el programa
 * el entero ingresado sera el numero de veces que tendremos que imprimir elguion bajo
 * para empezar declararemos una variable la cual sera guionBajo
 * dicha variable tendra como valor inicial el numero 1
 * empezaremos por poner un condicional que nos afectara solo si el entero n es mayor a 0 
 * dentro del mismo implementamos un bucle for.
 * el bucle for nos indica que la variable guionBajo empezara teniendo el valor de 1, tendra el rango maximo del entero n e ira subiendo un digito en cada bucle hasta llegar al rango maximo
 * en cada iteracion del bucle for debera imprimir el signo '_' el cual deberemos escribir en codificacion al codigo ASCII para que la funcion _putchar() nos imprima el signo real en este caso _putchar(95) imprimira '_'.
 * una vez se llegue al rango de iteracion del bucle for no queda otra que imprimir una nueva linea con la funcion putchar.
 * cuando se presente el caso contrario del if en el que el entero n sea igual o menor a 0.
 * la funcion _putchar() imprimira una nueva linea y asi entregando el valor final.
 */

void print_line(int n)
{
    int guionBajo;
    if (n > 0)
    {
        for ( guionBajo = 1 ; guionBajo <= n ; guionBajo++)
        {
            _putchar(95);             
        }
        _putchar('\n');
    }
    else
    {
        _putchar('\n');
    }
}