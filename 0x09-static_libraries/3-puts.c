#include "main.h"

/** Anotaciones para comprender el programa
 * del mismo modo que el ejercicio anterior nos dan una caneda de caracteres string
 * basandonos en el codigo anterior, con la diferencia de que no debemos escribir la longitud de la cadena sino imprimir cada uno de los caracteres del string.
 * se implementa de nuevo una variable de tipo entero (caracter) definiendolo como 0 siendo 0 el caracter inicial de la cadena.
 * con el bucle while la variable concrementara dentro del bucle.
 * para poder imprimir cada caracter de la cadena se usara la funcion putchar.
 * especificamente para que putchar se encargue de imprimir el caracter se debera escribir asi: 
 * _putchar(str[caracteres]);, donde str llama al string definido por la funcion main que llama a la funcion prototipo, [caracteres] llama a cada caracter especificado por el valor dentro de la variable empezando por 0, el cual especifica el primer caracter.
 * en cada vuelta del bucle ire aumentando el valor de la variable caracter hasta encontrar el valor nulo.
 * imprimiendo asi todos los caracteres del string.
 * una vez se sale del bucle se imprime la linea linea nueva para que imprima los caracteres del string y una linea nueva, terminando con el programa y el ejercicio propuesto.
 */

void _puts(char *str)
{
    int caracteres = 0;
    while (str[caracteres] != '\0')
    {
        _putchar(str[caracteres]);
        caracteres++;
    }
    _putchar('\n');
}