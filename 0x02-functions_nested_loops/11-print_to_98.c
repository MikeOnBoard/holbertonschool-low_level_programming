#include "main.h"
#include <stdio.h>

/** Anotaciones para este programa
 * aclarando el metoro para resolver este ejercicio 
 * empezamos por declarar una variable llamada rango que sera la que iterara en los bucles for en respuesta al if inicial.
 * tenemos una condicion clave, la cual nos dice que si n(el entero ingresado mendiante el programa quer hace el llamado de la funcion prototipo).
 * es menor o igual a 98(el numero base al cual tenemos que llegar con el rango mencionaldo).
 * dentro del if encontraremos un bucle for el cual va a iterar sobre el rango a partir del entero que se esta ingresando en la funcion. 
 * para el condicional el bucle nos dira que el bucle maximo sera el numero 98 
 * dentro del bucle for tendremos una instruccion, mas un condicional mas.
 * la primera instruccion nos dice que imprima el valor de la variable rango dentro del rango de iteracion del bucle for, sin el condicional imprimira el numero 98 cuando ese sea el entero ingresado, pero si el numero ingresado es distinto al 98 entrata en juego el condicional aniadiendo una instruccion mas, la cual es aniadir una coma y un espacio en blanco.
 * lo cual nos daria el resultado de impresion: si es 98: 98, si es un numero mayor como 96: 96, 97, 98.
 * una vez llega al numero limite que es 98 terminaran cada uno de los bucles for establecidos, ya que el numero 98 sera el final del algoritmo.
 * saliendo del condicional tenemos el caso de que sucede si el numero es mayor a 98, y a su vez tenemos un bucle for el cual disminuye el valor de la variable rango cada vez que da una vuelta y no como el bucle for anterior que aumentaba el valor de la variable rango para cada vuelta, imprimiendo los numeros restando hasta llegar al numero 98 y asi finalizando con el algoritmo.
 * Errores en la resolucion del codigo anterior a este:
 * un problema presentado nos daba una error el cual nos indicaba que el bucle for no funcionaba debido a que no habiamos declarado la variable inicial antes de crear el condicional if.
 * dentro de los condicionales se pueden tener un bucle for, pero para poder iterar con el mismo todas las variables que esten involucradas en su funcion deberan ser declaradas fuera de el condicional que se encuentra utilizando el bucle for.
 * en este caso al no ser una funcion de tipo int, no podiamos retornar ningun valor, pero si podiamos usar una libreria estandar.
 */

void print_to_98(int n)
{
    int rango;

    if (n <= 98)
    {
        for (rango = n; rango <= 98; rango++)
        {
            printf("%d", rango);
            if (rango != 98)
            {
                printf(", ");
            }
        }
    }
    else
    {
        for (rango = n; rango >= 98; rango--)
        {
            printf("%d", rango);
            if (rango != 98)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
}
