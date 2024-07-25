#include "main.h"

/** Anotaciones para entender este programa
 * despues de mucho fucking estres he podido entender un poco mas el tema de la moduralizacion
 * para entender este programa empezamos de arriba hacia abajo
 * declaramos las variables necesarias para definir la funcion, siendo enm este caso 5, las cuales son
 * fila: itera el primer bucle for, el cual se encarga de en cada vuelta imprimir un salto de linea, completando asi una linea de 9 digitos empezando por el numero 0.
 * columna: la variable itera sobre las columnas gracias al bucle for en el cual se define y sigue el bucle 10 veces empezando por el numero 0.
 * valorProducto: esta variable sera el protagonista de todo el programa siendo el valor de la misma cada numero que sera impreso en la tabla, ademas de esto y principalmente es el producto de la multiplicacion entre el valor de la variable fila y la variable columna, cambiando su valor con cada vuelta de los bucles respectivos.
 * segundoDigito: esta variable sera el resultado de la operacion entre la variable valorProducto, el operador modulo y el numero 10(valorProducto % 10) cada vez que es mayor a 9 siendo el resultado el segundo digito de la variable inicial(cabe aclarar que todo valor entero afectado por el modulo de 10 sera su mismo valor si es menor a 9 y el ultimo digito cuando sea mayor a 9).
 * multiploDeDiez: esta variable nace como resultado de restar el valor del segundo digito de la variable valorProducto, dando como resultado un multiplo de 10 o la decena del valor del producto, la cual a su vez sera dividida entre 10, al tratarse de un multiplo de 10 el resultado sera un solo digito(ej: 42(valorProducto) - 2(segundo digito de valorProducto) = 40 / 10 = 4), el cual se almacenara en la variable cambiando su valor cada vez que se da una vuelta al bucle for.
 * el primera bucle for, contiene el valor de la variable fila y aumenta su valor cada vez que da una vuelta
 * el segundo bucle for, contiene el valor de la variable columna aumentando su valor cada vez que realiza la instruccion del bucle hasta llegar al rango maximo.
 * seguido de esto tenemos la definicion de la variable valorProducto, siendo asi el resultado de la multiplicacion de las dos variables iniciales las cuales iran aumentando y asi se multiplicaran entre si dando el resultado de los numeros escritos en la tabla.
 * tenemos despues de eso un condicional el cual nos indica que cada vez que el valor supere el numero 9 se van a realizar unas instrucciones especificas siendo estas las siguientes:
 * 1. definir las ultimas dos variables(segundoDigito y multiploDeDiez), siguiendo una serie de calculos algoritmicos para poder definir cada uno de los digitos que componen un valor cada vez que supera el numero 9
 * 2. imprimira una coma y un espacio en blanco los cuales se definen por el valor numerico del caracter especifico generado por el codigo ascii, los cuales son 44 para la coma y 32 para el espacio en blanco.
 * 3. seguido de esto imprimiran el valor de cada uno de los digitos seguido de el caracter '0' el cual se debera sumanr cada vez que querramos escribir un valor numerico, de lo contrario nos dara un error ya que la funcion _putchar escribe el caracter correspondiente del codigo ascii definido por un numero entero que quede asignado a la variable, sin este cero seria un caracter en vez de un numero entero.
 * una vez sew sale de el condicional if(si!(condicion para activarlo)) tenemos un else(de lo contrario) que imprime el valor de la variable valorProducto solo si la primera condicion no se cumple, la cual nos dice que debe ser mayor que 9, pero en este caso se cumplira como condicional inicial y asi nos dara el valor de 0 inicial de la tabla. 
 * y otro if(si!(y la condicion para activarlo)) el cual nos dice que si el valor de la variable valorProducto es distinto a 0 imprimira asi una coma y un espacio en blanco dictados asi por su valor entero en el codigo ascii, para luego imprimir el valor de la variable valorProducto mas el caracter '0' para poder escribir un valor entero por medio de la funcion _putchar y no un caracter del codigo ascii.
 * se que no es de importancia para los demas pero para mi tiene mucho valor y mucho sentido el entender ejercicios asi cuando recien estoy empezando a programar, ya que no es sencilo pero se que cada vez mas estoy amando este mundo y asi empapandome de su riqueza y conocimientos. gracias por no decaer y seguir adelante maicol, de a poco y de a pasos cortos pero firmes llegaremos a esa meta la cual alcanzaremos y cuando menos lo esperes creceras y  aportaras algo de valor a este mundo :) "Gracias".
 */

void times_table(void)
{
        int fila, columna, valorProducto, segundoDigito, multiploDeDiez;

        for ( fila = 0; fila <= 9; fila++)
        {
        for ( columna = 0; columna <= 9; columna++)
        {
        valorProducto = fila * columna;
        if ( valorProducto > 9)
        {
        segundoDigito = valorProducto % 10;
        multiploDeDiez = ( valorProducto - segundoDigito) / 10;
        _putchar(44);
        _putchar(32);
        _putchar(multiploDeDiez + '0');
        _putchar(segundoDigito + '0');
        }
        else
        {
        if ( fila != 0)
        {
        _putchar(44);
        _putchar(32);
        _putchar(32);
        }
        _putchar( valorProducto + '0');
        }    
        }
        _putchar('\n'); 
        }
}