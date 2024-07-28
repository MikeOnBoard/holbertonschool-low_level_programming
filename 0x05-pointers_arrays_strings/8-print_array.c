#include <stdio.h>
#include "main.h"

/** Anotaciones para entender el programa
 * para poder entender el ejercicio debemos entender como funciona un array 
 * un array es una estructura de elementos del mismo tipo almacenados en una variable, especificndo su tipo y el tamaño del mismo(espacios amacenados en memoria).
 * en este ejercicio haremos la funcion prototipo declarando la variable y sus elementos dentro de los parentesis.
 * donde int *a(tipo de elementos en el array y nombre del mismo.) y int b(numero de elementos dentro del array).
 * empezaremos por crear una variable la cual iterara en el rango de la cantidad de elementos en el array.
 * crearemos un bucle for dentro de la funcion, el cual mediante la variable i, iterara con un rango maximo menor al numero de elementos del array, en este caso para que no imprima el caracter nulo, el cual se imprimiria con un valor de 0.
 * el bucle tendra que frenar antes de llegar a ese ultimo valor.
 * dentro del bucle for, usaremos la funcion print f la cual mediante la expresion printf("%d", a[i]); imprimira cada elemento del array en cada iteracion del bucle for.
 * pero antes de que de la siguiente vuelta en el bucle for tenemos un condicional.
 * el condicional tiene la siguiente expresion: if ( i != b - 1 ) donde nos indica que  si el elemento en i es diferente al penultimo elemento del array, es decir b - 1 imprimira una coma y luego dara otra vuelta imprimiendo el valor de el siguiente ejecutando de nuevo el condicional y asi sucesivamente.
 * porque b - 1? porque ya que el bucle for llega a un elemento antes del elemento final, si solo colocaramos la letra b la condicional seria siempre verdadera.
 * por esa razon se llegara a un elemento antes del rango total del array.
 * una vez imprime todos los elementos seguidos por una coma llegara al ultimo elemento haciendo que la condicion sea falsa, por lo cual no imprimira la coma y saldra del bucle for.
 * imprimiendo por ultimo un salto de linea.
 * el truco en este ejercicio esta en el bucle for y como afectara el condicional if, debido a que no necesitamos que imprima el caracter nulo, ya que lo imprimira como un 0, lo cual estaria erroneo para completar el ejercicio propuesto.
 * es de tener muy en cuenta este tipo de detalles si queremos que nuestra logica de programacion mejore consecutivamente >:).
 */

void print_array(int *a, int b)
{
    int i;
    for ( i = 0; i < b ; i++)
    {
        printf("%d", a[i]);
        if ( i != b - 1 )
        {
            printf(", ");
        }
    }
    printf("\n");
}