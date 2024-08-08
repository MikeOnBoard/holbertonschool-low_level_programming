#include "main.h"

/** Anotaciones para entender el programa
 * en este ejercicio tnemos unas especificaciones claves 
 * la cual nos da un puntero de arreglo de strings que contienen caracteres ya previamente escogidos en la funcion main como argumento inicial(char *s), un string de base para ser intercambiado por los strings del arreglo inicial(char b) y un numero n cantidades las cuales seran intercambiadas, puede ser cierta cantidad o todas(unsigned int n)
 * dicho esto debemos reemplazar cierta cantidad de bytes(unsigned int n) de un arreglo inicial por los bytes entregados que interactuan mediante esta funcion(estos bytes tambien seran proporcionados en la funcion main)
 * en este ejercicio de ejemplo cada byte del arreglo inicial es: {0x00} y sera reemplazado por: {0x01}
 * en este ejemplo el arreglo inicial tiene 98 elementos(0x00) y seran reemplazados n cantidad por {0x01}
 * en el ejercicio nos dan 95 bytes, lo que queiere decir que solo 95 {0x00} seran reemplazados por {0x01}
 * esto se hara con la sigueinte funcion prototipo
 * para empezar la funcion requiere que declaremos un puntero el cual apuntara a la primera posicion en memoria del arreglo proporcionado.
 * esto se hara mediante un bucle while el cual se asegurara de intercambiar exactamente el numero n de bytes mediante la condicional n--, esto quiere decir que intercamiara y restara n hasta que llegue a 0 esto para que una vez llegue a 0 deje de intercambiar y asi sea exacto el numero de veces.
 * dentro del bucle while intercambiaremos cada byte o valor del espacio en memoria por el proporcionado por el char b(string de caracteres 0x01)
 * a medida que se intercambia a partir del primer espacio en memoria de s mediante *ptr por el char b este espacio ira aumentando a medida que decrementa el valor de n para asi asegurarse que todo intercambia de manera correcta.
 * esto mediante la expresion: *ptr++ = b; primer espacio de ptr sera el primer espacio de s y se intercambiara por b.
 * por ultimo deberemos devolver nuevamente el char principal con los cambios realizados mediante un return ya que la funcion es de ese tipo.
 * y asi concluyendo el ejercicio y entregando el codigo correctamente.
 * conclusiones de la realizaciondel ejercicio:
 * para poder acceder a los valores en memoria de un char principal o src deberemos crear un puntero el cual nos dirija a su primer valor en memoria.
 * la condicional en n tambien puede ser decrementar usado en un bucle while como en for pero simplemente colocando n--.
 * ojo recordar esto.
 * cuando se usa el unsigned sera para determinar que no tenga un rango limitado dentro de su valor ya que todos los tipos de variables tienen un rango que sera interpretado dependiendo de su valor, pero asignando el unsigned deslimitara dicho rango proporcionando mas rango de interaccion al valor de dicha variable. 
 */

char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n--)
    {
        *ptr++ = b;
    }
    return s;
}
