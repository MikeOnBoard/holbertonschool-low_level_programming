#include "main.h"

/** Anotaciones para entender el programa
 * explicare linea por linea de manera que cualquier persona pueda entender. 
 * empezamos por aclarar que la funcion main utiliza el puntero *ptr para llamar al puntero original de la variable dest, y ya que a medida que se aopean cada uno de los caracteres de una cadena a otra los punteros terminan cambiando la locacion a la que apuntan dejandolo en una posicion totalmente distinta a la original.
 * para evitar que nos de un error, vamos a copear la direccion del puntero original de la variable dest en un puntero extra el cual al final nos permita retornar el valor del puntero originl al final del programa al momento de retornar un char al final del codigo antes de cerrar la funcion.
 * por esa razon se crea el puntero *start en el cual se guardara la posicion de dicho puntero inicial.
 * debido a ue en esta funcion tenemos un argumento adicional el cual nos restringe el numero de espacios definidos para la variable dest cuyo nombre sera n.
 * vamos a iterar sobre un for el cual necesita una variable adicional para que funja como indice del bucle for(int i).
 * como comentamos en el ejercicio anterior el rango debe ser i < a n ya que si fuera igual iteraria una vez mas de lo necesario el bucle for, en caso de n 3 iteraria 4 veces y pero si i< iteraria 3.
 * dentro de el bucle generaremos un condicional el cual tendra dos condiciones unidas por una conjucion del operador &&(and), el cual nos indica que ambas condiciones deben ser ciertas para que el condicional acceda a las instrucciones que tiene dentro.
 * igual que el bucle for, la primera condicion sera que i sea menor a n y la segunda nos dice que el caracter del string recurso debe ser distinto al valor nulo.
 * if (i < n && src[i] != 0 ) esta expresion nos dice que si el valor de n es es menor al valor del caracter del string imprimira los valores que n requiera.
 * las instrucciones nos indica que a medida que un caracter de dest avance sera igual al caracter de dest en la misma posicion que src, copiando cada caracter hasta n veces.
 * luego de esto antes de que salgo del bucle for la copia de los caracteres encontraremos el caso contrario del condicional incial.
 * este else(de otro modo) nos dice que si el cuando el rango n termine y aun no sea el caracter nulo se imprimira el mismo para dar por terminada la cadena de caracteres.
 * ejemplo claro es que si n es 5 al final se imprimiran 5 caracteres en la variable destino y luego se imprimira el caracter nulo para dar por terminada la copia de caracteres.
 * esto queda mas claro despues de leer la funcion main que llama a esta funcion prototipo.
 * una vez salimos del bucle for debemos devolver el puntero de la variable dest. pero ya que el puntero fue iterado un numero n de veces, el puntero ya no apunta al primer espacio de memoria destinado para la variable dest, por lo cual debemos asignar el punteronuevamente a la ruta inicial.
 * esto lo hacemos por medio de la variable start, la cual guardo la ruta de la direccionen memoria inicial del puntero dest, esto lo haremos mediante la expresion : dest = start(no hace falta colocar * en cada una de ellas ya que se ven referenciadas implicitamente).
 * por ultimo para dar por resuelto el ejercicio y terminado con el codigo retornaremos el puntero dest con la expresion return dest;. 
 * siga asi y recuerde moverse un poco todos los dias y dormir muy bien, va bien, los pasos requieren ser seguros, no interesa la velocidad con la cual se dan :).
 */

char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;
    int i;

    for (i = 0; i < n; i++) {
        if (i < n && src[i] != '\0') {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
    }
    dest = start;
    return dest;
}