#include "main.h"

/** Anotaciones para entender este programa
 * declararemos dos variables, tal como estaba previsto en la primera version del programa 
 * un bucle sera para imprimir los numeros del 0 al 14 diez veces.
 * el siguiente bucle sera para imprimir los numeros del 0 al 14
 * se creara un condicional como primera instancia para controlar la impresion de los numeros una vez que el rango supere el rango de 9.
 * es importante aclarar que al poner el condicional despues de la accion de imprimir los numeros imprimira los numeros hasta el 9 bien, pero cuando llegue al diez, imprimira los numeros en el orden incorrecto.
 * ej: 01234567890111213141
 * por esta razon es primordial el orden de el condicional y su accion.
 * para los numeros mayores de 10 se hace una division entre 10 para obtener su valor en decenas, adicional a esto se usara la funcion putchar para imprimir los caracteres en vez de enteros.
 * razon por la cual dentro de la funcion se hara la suma del caracter '0' y asi complementar su uso.
 * cabe aclarar que al ser variables del tipo entero cuando se realice la division se obtendra el entero a dividir.
 * ej 13 / 10 = 1.3, pero al tratarse de enteros la division solo entregara el numero 1 razon por la cual el orden del condicional afecta su resultado, debe imprimir el digito 1 primero para cada numero mayor a 10.
 * una vez se sale del condicional la funcion imprimira cada uno de los numeros en su orden.
 * se facilita la escritura al usar una operacion entre la variable numeros, el operador modulo y el numero 10 ya que dicha operacion para culaquier numero que no sea 0 dara como resultado el ultimo digito, en caso de que su numero sea menor a 10 dara como resultado el mismo numero.
 * una vez se haga dicha operacion se debe sumar el caracter '0' para que la funcion putchar pueda imprimir los numeros del 0 al 14 y no algun tipo de caracter dentro del codigo ASCII.
 */

void more_numbers(void)
{
    int diezVeces, numeros;

    for ( diezVeces = 0; diezVeces < 10; diezVeces++)
    {
        for ( numeros = 0; numeros <= 14; numeros++)
        {
            if (numeros >= 10)
            {    
                _putchar(numeros / 10 + '0');
            }
            _putchar(numeros % 10 + '0');
        }
        _putchar('\n');
    }
}