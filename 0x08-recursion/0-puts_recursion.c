#include "main.h"
#include "stdio.h"

/** Anotaciones para entender este programa 
 * primero que todo lo logramos!
 * ahora si las anotaciones para poder entender este programa.
 * la recursion es basicamente mediante una condicion parar la llamada de la misma funcion para que no incurra en un bucle infinito.
 * en este caso nos piden imprimir mediante la funcion _putchar una cadena hasta un caracter antes del valor nulo.
 * para ello usaremos la llamada de la funcion dentro de un condicional if.
 * la condicion puede variar, puede ser *s(mientras, la funcion exista) o != '\0'(mientras sea diferente a NULL)
 * dentro pondremos la funcion putchar la cual dara inicio a la funcion prototipo.
 * despues de esto llamaremos a la funcion de nuevo, es decir que crearemos la recursion con la llamada a la funcion misma, esto mediante la expresion:
 * _puts_recursion(s + 1) esta hara la recursion de s(puntero al espacio en memoria del primer caracter de la cadena principal).
 * esto hara que se cree un bucle infinito hasta que s sea NULL y asi parando la llamada a la funcion.
 * para poder imprimir la nueva linea se debera ejecutar en el caso de que el primer condicional no se cumpla.
 * para eso lo pondremos dentro de un else, el cual, contendra la impresion del salto de linea mediante la funcion putchar.
 * una vez hecho esto terminaremos con exito el codigo y cumpliremos con el ejercicio de manera satisfactoria.
 * conclusiones para este programa:
 * la llamada a la recursion debe ser dentro del condicional.
 * el condicional sera la base fundamental para que la recursion logre hacer lo que nosotros querramos.
 * otra base fundamental sera la operacion dentro de la funcion recursiva, esto se hara dentro del parentesis de la funcion recursiva.
 */

void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    } else
    {
        _putchar('\n');
    }
}