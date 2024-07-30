#include "main.h"

/** Anotaciones para entender el programa 
 * para no demorarnos mucho en las anotcaiones anotare los cambios que se realizaron en este programa
 * al agregar una variable de tipo int para limitar el numero de espacios dedicados para el strng src debemos iterar ese numero de veces.
 * para ello declaramos una variable i para que itere sobre el valor de n la string src la cual sera la segunda palabra de la string dest.
 * debido a que debemos iterar sobre el valor de n tenemos que agregar una condicion extra a la expresion *src != '\0'.
 * su resultado fnal seria for (i = 0(tambien se podria dejar en 1 pero afectaria a la condicion siguiente); i < n(si dejamos como valor inicial de i=1 la expresion debera ser i <= n para que itere exactamente 3 veces en ambos casos) &&(dos condiciones) *src != 0(de no colocar esto cuando n sea 1024 la iteracion se bloquea dando un crash al programa); i++, src++, dest++)
 * dentro del bucle for la expresion correcta seria *dest = *src y no *dest += *src ya que cada caracter o espacio de memoria debe ser igual por lo que la suma podria dar errores en el codigo en caso de ser mas complejo el codigo en un futuro.
 * esos son los unicos cambios que se realizaron en este programa.
 * como vemos la base del programa anterior nos puede funcionar para darnos una idea del codigo.
 */

char *_strncat(char *dest, char *src, int n)
{
char *backup = dest;
int i;
    while ( *dest != '\0')
    {
         dest++;
    }
    for ( i = 0 ; i < n  && *src != 0 ; i++, src++, dest++)
    {
        *dest = *src;
    }
    dest = backup;
    return dest;
}