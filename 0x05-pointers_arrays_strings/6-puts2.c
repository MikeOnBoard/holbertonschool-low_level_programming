#include "main.h"

/** Anotaciones para entender este programa
 * en este caso puede parecer simple pero todo tiene un porque de las cosas.
 * empezaremos declarando dos variables
 * int longitud = 0;. esta variable sera declarada y definida con el fin de calcular o hallar la longitud del string
 * int i;. esta variable sera declarada para poder iterar en un bucle for y en consecuencia al rango de la longitud del sring.
 * como hemos visto en estos casos similares lo primero sera hallar la longitud del string mediante un bucle while.
 * el bucle while reconocera cada una de las posiciones hasta llegar al caracter nulo, eso nos permitira hallar la longitud del string.
 * siempre hay que tener en cuenta que dentro del bucle debe haber una accion, la cual si queremos hallar la longitud del string debera incrementar la posicion del caracter en cada vuelta(longitud++;).
 * el bucle while unicamente debera usarse para calcular la longitud, cualquier otra iteracion debera hacerse fuera de el, a menos que la solucion al problema requiera iterar dentro del bucle while.
 * una vez encontremos la longitud, crearemos un bucle for en el cual deberemos iterar sobre la variable i en el rango de longitud y incrementando i en cada vuelta.
 * ahora un error cometido previo a su correccion era que puse un condicional if(es correcto el uso mas no la condicion) en el cual tenia la condicion de que si encontraba un valor diferente a al resultado de la operacion(i % 2 != 0) resultado por el cual me arrojaria 1 e los imprimiera los caracters impares.
 * lo cual estaba equivocado ya que el ejercicio me pedia imprimir los caracteres en posicion par, por lo cual la expresion deberia ser: if( i % 2 == 0) si la condicion es correcta iprimiria i(numeros pares 0, 2, 4, 6, 8), quedando bien ejecutado el codigo y resolviendo los el ejercicio propuesto.
 */

void puts2(char *str)
{
    int longitud = 0, i;
    while (str[longitud] != '\0')
    {
        longitud++;
    }
    for ( i = 0; i <= longitud; i++)
        {
            if ( i % 2 == 0)
            {
                _putchar(str[i]);
            }
        }
    _putchar('\n');
}