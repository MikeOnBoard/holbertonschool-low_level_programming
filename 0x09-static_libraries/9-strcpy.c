#include "main.h"

/** Anotaciones para entender este programa
 * Empecemos por decir que hay varias formas de resolverlo, unas mas complicadas que otras pero todas llevan al mismo fin.
 * tenemos una string base declarada y definida la cual contiene una cadena de caracteres y otra string destino declarada a la cual debemos copiar la cadena de caracteres del string base.
 * como los antiguos ejercicios de este tipo vamos a hallar la longitud del string base.
 * utilizando el condicional while como lo habiamos visto antes.
 * una vez encontrada la longitud, vamos acrear un bucle for en el cual vamos a iterar sobre las posiciones de ambas cadenas en un rango de longitud de la primera cadena.
 * dentro del bucle for la instruccion nos dira que mientras tengamos un caracter en la posicion i de una cadena, sera el mismo caracter de la cadena destino.
 * una vez que itere sobre todos los caracteres dentro del bucle for saldra del mismo.
 * A partir de aqui aclarare los errores que tenia el codigo anterior.
 * 1. Hay que tener en cuenta que cuando una funcion nos entrega un tipo que no sea void, asi mismo la funcion espera que se retorne el mismo tipo, por lo cual una vez fuera del bucle retornaremos la funcion de destino que seria "dest"
 * 2. dentro del bucle for se encontraba el error principal, el cual era el orden de asignacion e intercambio de caracteres entre una string y otra.
 * antes de la solucion estaba escrita asi: src[i] = dest[i] lo cual daba un error principal de memoria.
 * ya que la variable dest no tinene ningun valor y segun el orden cipearia todos sus caracteres a la segunda que ya estaba definida.
 * el orden correcto es dest[i](el cual no tiene un valor definido) = src[i](el cual ya tiene el valor definido por lo cual sera copiado a la variable sin valor definido). 
 * en pocas palabras no se puede copiar algo de donde no hay nada a otro lugar que no tine espacio jajajaja.
 * hay que revisar mil y un veces el codigo en busca de errores.
 * ya que un error puede deberse a cualquier cosa minuscua en el codigo.
 * char *_strcpy(char *dest, char *src)
{
    char *start = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // null-terminate the destination string

    return start;
}
 * esa seria otra manera de resolver el ejercicio por si mas adelante se me presenta un problema similar.
 */

char *_strcpy(char *dest, char *src)
{
    int longitud = 0, i;
    while (src[longitud] != '\0')
    {
        longitud++;
    }
    for ( i = 0; i <= longitud; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
