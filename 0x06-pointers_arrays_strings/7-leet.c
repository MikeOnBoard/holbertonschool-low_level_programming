#include "main.h"

/** Anotaciones para enternder el programa
 * en esta ocasion nos presentan un string el cual tiene unos requerimientos para ser aprobado
 * string = "Expect the best. Prepare for the worst. Capitalize on what comes.\n"
 * y lso requerimientos son :
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * lo cual nos quiere decir que debemos reemplazar ciertos caracteres dentro del string, devolviendolo con los cambios realizados.
 * para ello como recordamos en ejercicios anteriores debemos crear un puntero el cual guardara el puntero del primer elemento del string.
 * despues de esto crearemos dos variables de tipo char.
 * una contendra los caracteres los cules deberemos cambiar.
 * la siguiente contendra los caracteres por los cuales seran cambiados en el orden anterior.
 * como podemos ver se repiten los numeros del segundo string, esto debido a que el orden de cambio debe ser el mismo y asi ambas posiciones delos caracteres deben coincidir para que sean parejas.
 * para resolver esto de la manera mas sencilla deberemos crear primero un bucle for el cual cambiara de posicion el puntero del string recorriendolo y detectando los caracteres incluidos para el cambio dentro del ejercicio.
 * despues crearemos una variable la cual sera de tipo entero y tomara labor siendo el indice del bucle for a continuacion y tambien iterara sobre los caracteres de las dos string globales que han sido creadas.
 * el proximo for servira para reconocer si un caracter del string principal esta dentro de los caracteres mencionados.
 * en cada vuelta del bucle aumentara un caracter dentro de la variable lookup para iterar sobre cada uno de los caracteres.
 * dentro del for tendremos una condicional, la cual nos dira que si el caracter del string principal es igual a uno de los caracteres dentro de lookup recibira la instruccion de reemplazarlo por el caracter correspondiente dentro de la string = replace.
 * el resultado sera dicho caracter correspondiente ya que la variable i iterara en la psocicion de ambas string globales. una vez itera todos y encuentra el caracter correspondiente, hara el cambio y para luego romper el segundo bulce for y seguir aumentando el valor de la variable principal, llegando asi a su final.
 * al final debido a que la funcion es de tipo char, retornaremos el puntero inicial en el cual guardamos el puntero del primer caracter de la variable principal
 * y asi dando por terminado el codigo y asi cupliendo con la meta de dicho ejercicio.
 * este ejercicio fue resuelto con la ayuda de chat gpt, pero al momento de ejecutar el programa me di cuenta de que chat gpt me estaba arrojando un error, el cual era el contenido y orden de las variables que contenian tanto los caracteres a reemplazar, como los caracteres los cuales serian su reemplazo.
 * al final se verifio y corrigio el error encontrado, hay que tener en cuenta esto en futuros ejercicios ya que en esos detalles nos toparemos mas adelante con desafios y si no sabemos como verificar ese tipo de errores no avanzaremos en el aprendizaje y crecimiento como programador.
 */

char *leet(char *str)
{
    char *p = str;
    char lookup[] = "aAeEoOtTlL";
    char replace[] = "4433007711"; 

    for (; *p; p++)
    {
        int i;
        for ( i = 0; lookup[i]; i++)
        {
            if (*p == lookup[i])
            {
                *p = replace[i];
                break; 
            }
        }
    }

    return str;
}