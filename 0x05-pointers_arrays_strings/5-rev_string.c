#include "main.h"

/** Anotaciones para entender el programa
 * este programa fue dificil de interpretar al principio ya que me demore demasiado
 * empezaremos por declarar/definir las variables para completar correctamente este ejercicio
 * la primera variable int length = 0 se usara para almacenar la longitud del string como ya se ha visto en programas anteriores iterando sobre un bucle while mientras que el caracter del string sea diferente al caracter nulo, el valor de la variable aumentara hasta encontrar el caracter nulo, dando asi el resultado de la longitud del string incluyendo el caracter nulo.
 * la segunda variable int i iterara sonre el bucle for, empezando con un valor 0 
 * la tercera variable char temp se usara para almacenar cada uno de los caracteres y realizar el proceso de intercambio en el bucle for, esta variable sera temporal, ya que se usara para iterar el intercambio y sera de tipo char ya que tiene qe coincidir con el tipo del string que almacena caracteres, de ahi el tipo char.
 * nos centraremos en el bucle for ya que el bucle while ya ha sido visto en ejercicios anteriores.
 * para entenderlo empezarems iterando la variable i igual a 0 en un rango de la variable length / 2: como resultado seria 9/2 = 4.5 pero al tratarse de un operador en contexto algoritmico y siendo i de tipo entero nos entregara el valor sin punto, dando como resultado 4, por lo cual el rango maximo de iteracion del bucle for en 4, siendo este la mitad de la longitud del string sin contar el caracter nulo.
 * en cada vuelta el valor de i aumentara hasta llegar a un total de 4.
 * dentro del bucle for realizaremos una operacion de intercambio.
 * la expresion temp = s[i] nos indica que temp tomara el valor de el caracter en la posicion de i, en este caso cuando i=0 temp sera el primer caracter del string = M.
 * ahora ya sabemos que s[i] = m ahora la expresion s[i] = s[length - 1 -i] nos indica que el caracter pasara a tener el valor de la ecuacion length - 1 -1 = 9 - 1 - 0(cuando i = 0) = 8 como resultado ahora el valor de s[i] es 8, el cual nos indica que es el caracter 'l'.
 * la linea siguiente nos dice que la expresion s[length - 1 - i]( s[8](caracter 'l')) = temp quiere decir que ahora pasara a ser el valor en entero de temp antes 0 ahora 8 lo cual quiere decir antes 'M', ahora 'l', intercambiando los primeros dos digitos del string
 * en la iguiente vuelta cuando i=1, actuara sobre el caracter en la posicion 1 el cual es 'y' cambiandolo por el resultado de la ecuacion s[lenght -1 - i(1)]= s[9 - 1 - 1] = s[7]= s['o'].
 * razon por la cual en la segunda vuelta se intercambiaran el caracter 'y' y el caracter 'o' intercambiando 4 de los 8 caracteres validos dentro del string.
 * el proceso de intercambio continuara durante el rango dando como resultado 4 vueltas y asi se intercambian 2 caracteres por vuelta, por ende 2 * 4 = 8(cantidad de caracteres dentro del string).
 * tercera vuelta caracter ' ' y caracter 'o'.
 * cuarta vuelta caracter 'S' y caracter 'h'
 * el caracter 'c' no sera intercambiado ya que su posicion esta en el centro del string, no habria necesidad de hacer un intercambio.
 * aclaracion : el string de este ejercicio tiene en total 9 digitos antes del valor nulo.
 * My School
 * 012345678 = 9 
 * me encontraba un poco confundido en este momento pero cada palabra que añado a los comentarios agrega mas claridad al entendimiento del programa :) .
 */

void rev_string(char *s)
{
    int length = 0;
    int i;
    char temp;
    while (s[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}
