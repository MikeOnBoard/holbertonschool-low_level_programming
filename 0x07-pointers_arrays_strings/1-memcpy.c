#include "main.h"

/** Anotaciones para entender el programa
 * luego de terminar el programa llegare a varias conclusiones que no tenia en cuenta antes debido al desconocimiento de las cosas.
 * par poder resolver el ejrcicio lo haremos de la siguiente manera:
 * para empezar tenemos los punteros de cada uno de los arreglos de caracteres, punteros los cuales apuntan al primer espacio en memoria de cada uno.
 * esto puede variar al final dependiento de la funcion principal, esto debido a que en este ejercicio la funcion principal apunto al primer espacio en memoria del char *dest pero sumandole 50.
 * esto quiere decir que desplazo 50 espacios en memoria lo cual el puntero ya no apuntara al primer espacio en memoriua sino al espacio resultado de la expresio: char *dest + 50.
 * en esta funcion eso no influye ya que se inicializa con un argumento de puntero inicial, pero este no cambia dentro de la funcion, solo son reemplazados algunos bytes del mismo.
 * de acuerdo al ejercicio anterior a este nos da la oportunidad de usar el esquema de funcion del mismo para aplicarlo aca, con unos ligeros cambios en su codigo.
 * usaremos el mismo bucle while con el mismo condicional ya que nos proporcionan el mismo numero n de bytes a reemplazar.
 * a medida que n disminuye el bucle se ejecuta.
 * debido a que se copiara el valor de cada uno de los espacios correspondientes del arreglo suministrado por el arreglo final, no sera necesario conservar o intercambiar los bytes, por lo cual tampoco sera necesario crear una variable temporal para almacenar sus valores.
 * dicho esto cada espacio en memoria de la funcion suministrada y de la funcion final iteraran simultaneamente.
 * por lo que la expresion: *dest = *src nos indica que el valor de el espacio en memoria de dest sera reemplazado por el valor del espacio en memoria proporcionado por src.
 * una vez copiado el valor de dest, se hara un incremento en el puntero de cada uno de ellos para que a medida que avancen vayan siendo copiados, hasta que no hayan mas bytes n para copiar.
 * y asi una vez salga del bucle retornaremos el arreglo dest por medio de la funcion return, debido al tipo de funcion prototipo que designaos al principio y la cual es requerida en la funcion main.
 * terminando asi el codigo y resolviendo el ejercicio de manera correcta.
 * concluciones:
 * debido a que sera retornado dest y no src, entre pruebas vi que no era necesario crear un puntero adicional para src, sino trabajar directamente con el puntero de src.
 * para tener en cuenta la solucion de ejercicios futuros si sera necesario tener un conocimiento previo y saber porque y como funcionan las funciones predeterminadas o interiorizando el ejercicio haciendo enfasis en las peticiones y la solucion del mismo, utilizando como ejemploel resultado en consola otorgado en el ejercicio.
 * eso no es dificil, simplemente hay que entender como funcionan las cosas pero sobre todo y como puede interactuar una cosa con otra.
 * cada paso que se da es un paso a lograr los objetivos, por mas que aun no estemos donde queremos estar, disfruto mucho cada dia de aprendizaje hallando errores, tips basicos y funcionalidades que no habia conocido o entendido de ejercicios anteriores.
 * para tener un cerebro saludable hay que crear habitos saludables, de otra manera no funcionara de manera correcta y asi no aprendere de manera optima cada cosa que me entrega este mundo de la programacion.
 *  :).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = src;
    while (n--)
    {
        *dest = *ptr;
        ptr++;
        dest++;
    }
    return dest;
}