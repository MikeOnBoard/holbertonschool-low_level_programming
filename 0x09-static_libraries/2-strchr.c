#include "main.h"

/** Anotaciones para entender el programa
 * la funcion prototipo precisa de dos argumentos otorgados por la funcion principal main, uno es un puntero de un arreglo y el otro es un caracter.
 * debido a que no modificaremos el arreglo argumento sino que trabajaremos sobre el putero para encontrar un caracter no sera necesario guardar la direccion en memoria del primer elemento del arreglo señalado por el puntero.
 * lo primero que haremos sera recorrer el puntero por cada uno de los caracteres del arreglo mediante un bucle while.
 * la expresion: while ( *s!= '\0') nos dice que el bucle se ejecutara hasta que encuentre el valor nulo, recorreindo asi todo el arreglo.
 * dentro del bucle tendremos un condicional el cual nos ayudara a encontrar el caracter c el cual estamos buscando.
 * cada vez que se recorra cada uno de los elementos del arreglo, el condicional detectara si encontro el caracter, dicho esto si se encuentra retornara el arreglo desde el punto en donde encontro el caracter, independientemente que no lo encuentre mas el caracter seguira avanzando retornando cada uno de sus caracteres hasta llegar al valor nulo.
 * conclusiones de este programa:
 * una vez se encuentra el caracter requerido, se retornara el arreglo desde el caracter encontrado ya que idependientemente de eso el arreglo seguira siendo el mismo, pero ya que se implemento un puntero del mismo, el puntero ya no se encuentra en el primer elemento sino en el elemento del caracter 'c'.
 * por lo cual el resto del arreglo sera devuelto pero desde el elemento encontrado, esto gracias al desplazamiento del puntero.
 * si es el caso de que el caracter objetivo es el caracter nulo, el segundo condicional retornara nulo, pero este tambien depende de la funcion principal main la cual solo imprimira si el valor devuelto por la funcion es diferente al valor nulo.
 * de nuevo encuentro cosas que no conocia antes pero que me ayudan a dar mas entendimiento al conocimiento adquirido dia tras dia, si en algun momento tengo la oportunidad de despejar mas dudas de acuerdo a lo visto en estos ejercicios en problemas futuros 
 * se que estare aun mas agradecido de haberlo hecho y me sentire mucho mas feliz por estar donde estoy y por estar donde estare, todo es cuestion de tiempo y de errores.
 * los errores me llevaran al futuro :).
 */

char *_strchr(char *s, char c)
{
    while ( *s != '\0')
    {
        if ( *s == c)
        {
            return s;
        }
        s++;
    }
    if (c == '\0')
    {
        return s;
    }
    return '\0';
}