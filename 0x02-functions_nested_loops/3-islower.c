#include "main.h"

/* Anotaciones para comprender el programa
* partiendo de la funcion prototipo y su ragumento(int c) el cual devolvera un entero si o si sin importar que se escriba como char '' ej: 's' sera reconocido como un entero del codigo ASCCII.
* los valores ingresados en el programa 3-main.c son valores de caracter en codigo ASCII los cuales se van a interpretar de esa manera en la lectura del if.
* segun ASCII las letras minusculas inician desde el numero 97 hasta el numero 122 cuyos valores se encuentran definidos en la funcion prototipo en ese rango que conforman las letras minusculas. 
*/

int _islower(int c)
{
    if ( c >= 97 && c <= 122)
    {
    return(1);
    }
    return (0);
}
