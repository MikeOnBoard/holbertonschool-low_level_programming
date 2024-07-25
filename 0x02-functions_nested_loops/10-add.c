#include "main.h"
#include <stdio.h>

/** Anotaciones para entender este programa
 * la funcion add en su inicio, cuenta con dos datos de tipo entero pero sin declarar (int add(int, int)), siendo este el primero error a corregir.
 * para solucionarlo declare dos variable las cuales son a y b y a su vez tomaran el valor que le da el programa que llama a la funcion = 10-main.c
 * interiormente cuando definimos la funcion tenemos que tener en cuenta que al ser de tipo entero debera devolver un valor de tipo entero, entiendase por el final de la estructura principal del programa return(0);
 * asi mismo simplemente definiremos una variable llamada suma la cual contendra los dos valores especificados en el programa que llama a la funcion en este caso son 89 y 9.
 * al final una vez la variable suma toma el valor del resultado de la operacion, se da por finalizada la funcion prototipo retornando el entero suma (return(suma);).
 */

int add(int a, int b)
{
    int suma;

    suma = a + b;
    return(suma);
}