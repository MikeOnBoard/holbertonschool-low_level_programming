#include "main.h"

/** Anotaciones para entender el programa
 * f(accept) el puntero a buscar dentro de s(s)
 * muchas veces no hay que complicarse la vida buscando soluciones complicadas a porblemas simples
 * explicare el codigo paso a paso para entenderlo y comprender la solucion.
 * debido a la funcion de tipo char, debemos devolver un caracter
 * dentro de la funcion prototipo encontraremos dos argumentos de tipo char
 * *s(cadena en la cual deberemos buscar un coincidencia en punteros) *accept(cadena que usaremos para buscar coincidencias dentro de la anterior)
 * empezamos usando un bucle while con esta expresion simple( *s ) lo cual nos indica que mientras *s no llegue a su final(esto deido a que no nos dan los espacios definidos para almacenar una cantidad de caracteres) el final de *s sera el valor nulo
 * crearemos un puntero que accedera al espacio en memoria de *accept para poder interactuar con el mismo, de otro modo si se usa *accent nos daria un error(segmentation fault)
 * para poder interactuar con *a usaremos un bucle while el cual manejara la misma condicion del anterior while ( *a ) mientras que *a no llegue a su final seguira aumentando hasta lleegar y luego aumentar el puntero de *s
 * dentro del condicional encontraremos el caso de que si el *s es igual a *a retornara el espacio del puntero de *s con el valor del caracter igual a *a.
 * ya que ambos llegan a su final en tal caso de no encontrar coincidencias no te utilizara algun break o una bandera para especificar que se encontro la coincidencia.
 * una vez se devuelve s, termina de ejecutarse la funcion.
 * si se diera el caso de que no se encontrara coincidencia, la funcion retornaria el caracter nulo.
 * de esta manera cualquiera de los dos casos dara por terminada la funcion y realizado correctamente el ejercicio.
 * conclusiones de este programa:
 * se encuentra otra manera de crear un bucle, la condicional de la existencia, la cual termianra una vez llegue al final de la misma, esto desde mi punto de vista y suposicion funciona en este ejercicio debido a que no se definieron los espacios en memoria dedicados para cada arreglo.
 * al intentar recorrer *accept sin crear un puntero que se dirija correctamente al espacio en memoria de accept, este me arrojo un error de segmentacion, por lo cual se recomienda en estos casos probar y trabajar con un puntero que se dirija a ese espacio en memoria.
 * por lo demas ha quedado todo claro, agradezco a los errores que conozco en cada ejercicio por la oportunidad que me brindan de aprender.
 */

char *_strpbrk(char *s, char *accept)
{
    while ( *s )
    {   
        char *a = accept;
        while ( *a )
        {
            if ( *s == *a)
            {
                return s;
            }
            a++;  
        }
        s++;    
    }
    return '\0';
}
