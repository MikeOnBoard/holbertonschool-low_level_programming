#include "main.h"

/** Anotaciones para entender el programa
 * muchas veces se debe ver la posibilidad a simple vista antes de resolver un programa e intentar lo que se ha aprendido previamente, la respuesta puede ser igual, simplemente hay que cambiar algunas variables del codigo.
 * el modus operandi del codigo es el msimo que el del codigo pasado para intercambiar certos caracteres del string original
 * debemos tener en cuenta que los separadores de lineas son interpretados por printf, en este caso se interpreta "\" como la ausencia del mismo.
 * ya que el string lo contiene pero al momento de salir por medio de printf el caracter esta ausente, por lo cual me parece necesario aclararlo.
 * en este ejercicio nos piden intercambiar solo las letras y moverlas 13 letras despues de ellas.
 * quiere decir que si la letra empieza siendo a termina siendo n 13 espacios dezplazada.
 * debido a esto creamos dos string una para detectar la letra y la otra para dezplazarla 13 espacios despues, esto se hara sin importar si es mayuscula o minuscula.
 * esto se logra metiendo las letras tanto mayuscula como minuscula y sus reemplazos tanto en mauscula como en minuscula para que asi queden definidas las pareas que seran intercambiadas.
 * el resto del codigo permanece similar por no decir igual al codigo del ejercicio anterior.
 * hay que tener en cuenta todos los posibles caminos y pensar que hay muchas posibilidades por muy incoherente que parezca.
 * solo hay que jugar con la imaginacion.
 */

char *rot13(char *str)
{
    char *startP = str;
    char buscarC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwkyz";
    char cambiarC[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    for ( ; *str ; str++)
    {
        int i;
           for ( i = 0; buscarC[i] ; i++)
           {
            if ( *str == buscarC[i])
            {
                *str = cambiarC[i];
            }
           }
        }
    str = startP;
    return str;
}