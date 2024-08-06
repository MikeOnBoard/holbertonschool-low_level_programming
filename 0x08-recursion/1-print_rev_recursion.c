#include "main.h"

/** Anotaciones para entender el programa
 * para entender este programa hay que entender que cada vez que se llama a una funcion se crea una nueva llamada a la funcion y si se llama a otra funcion, cuando se llama a esa funcion en terminos de recursion se elimina la llamada a la funcion recursiva anterior.
 * dicho esto en este orden en el cual se coloca la llamada a la funcion la funcion va a llegar al estado base, el cual en este caso mediante if llega hasta el valor nulo.
 * una vez llega al valor nulo se retorna por si solo y empieza a imprimir el caracter meiante la funcion putchar.
 * todo esto depende de la condicion que se presente para la parada de la recursion, dentro de la condicion if, vemos que primero se hace la llamada a la funcion  despues se usa la funcion putchar para imprimir el caracter.
 * esto significa que la llamada a la funcion se va a realizar de manera continua hasta llegar al valor nulo y luego se imprimira el ultimo caracter de la cadena, esto por lo que fue la ultima posicion en la que estuvo antes del valor nulo.
 * ya que llego a la condicion seguira con la siguiente instruccion dentro del condicional if, luego ira retornando en las posiciones las cuales paso antes de llegar al valor nulo siguiendo el orden en reversa y asi imprimiendo cada caracter hasta llegar al primero.
 * y asi completaria la funcion completando el ejericio satisfactoriamente.
 * conclusiones del programa
 * se debe tener en cuenta el orden de las incstrucciones dentro del condicional para que asi se efectue la recursion en orden ascendente o decreciente.
 * debido a que la cadena original contiene un salto de linea, se imprimira un salto de linea al terminar la funcion y no habra necesidad de imprimir mediante putchar una nueva linea.
 */

void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}