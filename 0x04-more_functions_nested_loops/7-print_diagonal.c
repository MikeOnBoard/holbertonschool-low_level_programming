#include "main.h"

/** Anotaciones para entender el programa
 * este ejercicio es un ejemplo similar a el visto anteriormente en el que hay que imprimir un numero n(definido por el entero que nos proporcione el programa principal que llama a la funcion prototipo).
 * iteraremos las diagonales presentes en el rango n(entero proporcionado) por medio de un bucle for el cual nos dara el caracter diagonal iterando sobre el rango maximo que nos proporciona el entero n.
 * dentro de la iteracion necesitamos que nos imprima un espacio antes de imprimir las diagonal y el salto de linea.
 * por esa razon se crea otro bucle for, dentro para que asi el rango de iteracion sea el mismo que la variable diagonal.
 * creando asi dentro del bucle una nueva variable llamada espacio y asi realice el mismo bucle que la variable diagonal.
 * asi cada que se vaya a crear un bucle en el cual se escriba la diagonal, previamente deberan escribirse el numero igual de espacios.
 * una vez que se escriba el numero de espacios, saldra del bucle interno para imprimir la diagonal y el salto de linea.
 * dando como resultado el total de veces generadas por el entero n.
 * terminando asi con el programa.
 * no hay que olvidar el sentido por el cual empece en este mundo pese a que hayan cosas fuera de esto que me lleguen a afectar, hay que mantener el rumbo, porque la vida se encargara de colocarme las cosas que deben estar donde deben estar, incluyendo oportunidades, trabajos, personas, lugares y asi todo lo que sea correcto para seguir mi camino.
 */

void print_diagonal(int n)
{
    int diagonal, espacio;
    if (n > 0)
    {
        for ( diagonal = 1 ; diagonal <= n ; diagonal++)
        {
                for ( espacio = 1; espacio < diagonal ; espacio++)
                {
                    _putchar(32);
                }
                _putchar(92);
                _putchar('\n');
        }                
    }    
    else
    {
        _putchar('\n');
    }
}