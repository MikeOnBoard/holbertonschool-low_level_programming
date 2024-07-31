#include "main.h"

/** Anotaciones para entender el programa
 * para entender este programa enunciare solo lo que desconozco, simplificando la informacion ya conocida hasta el momento
 * creamos el puntero temporal para guardar la direccion en memoria del puntero incicial del string
 * realizamos un bucle for inicial para recorrer puntero del string hasta el caracter nulo
 * creamos un condicional para reconocer si la letra es minuscula.
 * hasta el momento odo es conocido, lo unico que se implemento es la operacion aritmetica dentro del condicional
 * si encuentra una letra minuscula, ya que el rano de letras mayusculas y letras minusculas dentro del codigo ascii se llevan 32 caracteres de diferencia.
 * restaremos 32 para que imprima la misma letra pero en mayuscula, dicho en otras palabras si es a, en el codigo ascii es 97, y la letra A mayuscula es 65 
 * 97 - 32 = 65.
 * de no encontrar una minuscula seguira el bucle for hasta llegar al caracter nulo, devolviendo el string con todas su letras en mayusculas.
 * al final devolvemos el puntero a la posicion inicial al final del codigo mediante asignar el valor de temp al puntero str.
 * y asi terminando el codigo y ejercicio, listo para ir al siguiente paridero.
 */

char *string_toupper(char *str)
{
    char *temp = str;
    for ( ; *str != '\0' ; str++)
    {
        if ( *str >= 'a' && *str <= 'z' )
        {
            *str -= 32;
        } 
    }
    str = temp;
    return str;
}