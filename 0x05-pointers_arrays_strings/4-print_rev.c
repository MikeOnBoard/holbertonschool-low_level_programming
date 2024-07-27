#include "main.h"

/** Anotaciones para entender el programa
 * una vez entendido el concepto de lo que es un string procederemos a realizar este ejercicio de codigo paso a paso
 * lo prmiero que haremos sera crear una variable de tipo entero, cuyo valor inicial sera 0 e iterara sobre el valor en tipo entero del cada uno de los caracteres del string.
 * primero ya que no sabemos la longitus del string anes del caracter nulo(\0) usaremos un condicional el cual nos otorgue la longitud del string.
 * el condicional como en ejercicios anteriores nos indica que mientras el caracter del string sea distinto al caracter nulo incrementara el valor del entero refieriendose al caracter en dicha posicion dentro del string, incrementando su valor una unidad.
 * una vez llega al valor nulo e incrementando en cada vuelta su valor, la variable tomara el valor de la longitud total de la misma en numero entero.
 * una vez tenemos el valor de la longitud usaremos ese valor como rango para empezar a escribir los caracteres en reersa tal cual nos indica el ejercicio que debe ser resuelto.
 * para hacer esto crearemos un bucle for.
 * previamente al declarar la variable caracteres la cual tomara el valor entero de la posicion de un caracter dentro del string, declare otra variable la cual iterara sobre el rango de la longitud del string obtenido previamente mediante el condicional.
 * esta variable hara parte del bucle for y tomara el valor de la longitud del string obtenido con e bucle whle.
 * una vez definida la variable i tomara el valor de la longitud, su rango de iteracion estara dentro de la longitud y su limite sera 0(el primer caracter del string, para que asi el ultimo caracter impreso sea el primero) y porultimo en cada vuelta del bucle for decrementara el valor de i hasta llegar a cero
 * dentro del bucle for tendremos la funcion putchar, la cual sera escrita: _putchar(s(nombre del string)[i](valor de la variable que itera y decrementa en cada vuelta)).
 * la i tomara el valor de cada uno de los caracteres del string e imprimiendo cada uno en secuencia de resta hasta llegar al valor cero que sera el primer caracter del string.
 * una vez tengamos impresos todos los caracteres del string saldra del bucle for, quedando la ultima instruccion dentro del programa, la cual sera imprimir una nueva linea y asi finalizar con el programa y el ejercicio propuesto.
 */

void print_rev(char *s)
{
int caracteres = 0, i;
while (s[caracteres] != '\0')
{
caracteres++;
}
for ( i = caracteres; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}