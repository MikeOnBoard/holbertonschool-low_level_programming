#include "main.h"

/** Anotaciones para entender el programa
 * para entender este programa empezamos de arriba hacia abajo
 * empezamos por declarar  3 variables que iteran sobre el entero size
 * claramente igual que algunos ejercicios hechos anteriormente empezaremos con un condicional el cual evalue el valor del entero size y luego actue.
 * si el entero es mayor a 0 seguira la linea de flujo por el condicional tomando una decision para luego iterar sobre los bucles for
 * el primer bucle for se usara para iterar sobre el numero de lineas de la funcion en rango del entero size, empezando por 1.
 * despues de esto creamos un bucle for el cual iterara sobre los espacios, en este bucle crearemos una variable cuyo valor sea el resultado entre.
 * la resta entre size y la variable lineaNueva, ej: al ser 2 la variable size el espacio tendra un valor de 1, imprimiendo un espacio y un numeral para asi ocupar los dos valores del size.
 * cada vez que se de una vuelta del bucle la variable espacio tendra un decremento, haciendo que se aclople hasta llegar a 1 como limite.
 * el tercer y ultimo bucle for itera sobre la cantidad de numerales que seran escritos. iniciando en 0 y incrementando a medida que se da un bucle en el rango original de linea nueva.
 * dentro de estos bucles for, tendremos las funciones putchar que como se vio en ejemplos anteriores imprimiran los caracteres incluidos en el ejercicio, ademas de las nuevas lineas.
 */

void print_triangle(int size)
{
    int lineaNueva, espacio, numeral;
    if (size > 0)
    {
        for ( lineaNueva = 1 ; lineaNueva <= size ; lineaNueva++)
        {
                for ( espacio = size - lineaNueva; espacio > 0 ; espacio--)
                {
                    _putchar(32);
                }
                for ( numeral = 0; numeral < lineaNueva; numeral++)
                {
                    _putchar(35);
                }
                _putchar('\n');
        }                
    }    
    else
    {
        _putchar('\n');
    }
}