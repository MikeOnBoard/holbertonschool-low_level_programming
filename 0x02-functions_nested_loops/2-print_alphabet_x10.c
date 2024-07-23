#include "main.h"

/* 
* Anotaciones
* para betty 
* Anotaciones para entender lo que estoy haciendo
* el archivo main.h incluira la declaracion de funciones en la cabecera del archivo, estamos importando nuestra propia libreria.
* dependiendo del resultado que queremos al momento de declarar la funcion en el main.h sera void, int, char, etc.
* se hace un llamado a la funcion en este caso void print_alphabet_x10(void)
* la llamda de la funcion el la definicion de la misma, en la cual deberemos crear las instrucciones dichas para la misma, pero usando una funcion creada previamente(_putchar).
* en este caso para poder crear la funcion utilice un bucle for(el cual por un rango establecido imprimira letra por letra(variable c)) dentro de un bucle while(quien repetira la accion en base al entero a y imprimira una nueva linea(despues del abecedario)).
* al ser una funcion de tipo void(sin argumentos) no retornara nada.
*/

void print_alphabet_x10(void)
{
    int a = 0;
    while ( a <= 10)
    {
        char c;
        for ( c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
        a++;
    }
}