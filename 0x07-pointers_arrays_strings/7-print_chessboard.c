#include "main.h"

/** Anotacones para entender el programa
 * dentro de la funcion main se encuentra:
 *     char board[8][8] = {
 *       {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
 *       {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
 *       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
 *       {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
 *       {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
 *   };
 * 
 *   print_chessboard(board);
 *   return (0);
 * para imprimir esto de manera sencilla hay que entender primero y porque se define de esa manera la matriz argumento dentro de la funcion.
 * la expresion char (*a)[8] nos indica que se declara un puntero que dirige a una matriz de 8 filas, el dato adicional de las columnas lo entrega la funcion principal
 * en la funcion pricipal nos entregan char board[8][8] entocnes char (*a)[8] se posiciona en la primera fila en el primer caracter de la misma, de ahi partimos para empezar a imprimir cada caracter mediante la funcion _putchar()
 * en char (a*)[8] a se encuentra dentro de un parentesis ya que es un puntero que apunta a un arreglo de caracteres, si se deja fuera de el parentesis se referirira a una matriz de punteros, mas no a una matriz de caracteres.
 * para imprimir esta matriz de punteros usaremos dos bucles for correspondientes los cuales se identificaran con una variable de tipo entero que juega el papel de ser el indice de dichos bucles.
 * independientemente de cual variable se use como indice para el bucle eso no afectara a su fincionamiento, por eso este codigo esta diseñado de tal manera que cada variable se declara dentro de cada bucle for.
 * asi dando por entendido el argumento anterior
 * un bucle maneja las filas o la cantidad de arreglos de caracteres y el otro maneja la cantidad de caracteres que perteneceran a esos arreglos, estos arreglos y caracteres seran declarados(se reservara un espacio en memorita para guardar un caracter que se definiran mediante la funcion principal)
 * dentro del segundo bucle pondremos la funcion putchar para imprimir cada caracter de cada arreglo.
 * el segundo bucle con la expresion _putchar(a[i][j]) nos indica que putchar esta accediendo a el caracter (j) de la columna (i).
 * empezando asi por el caracter 0 de la columna 0, putchar imprimira el caracter siguiendo con la siguiente vuelta del bucle for.
 * ya que el bucle inicial se ha mantenido en la misma vuelta mientras que el bucle secundario no termine de completarse mediante el condicional, putchar imprimira cada uno de los caracteres hasta el caracter 7 y asi saliendo del bucle secundario para seguir la siguiente instruccion del bucle primario.
 * una vez sale la funcnion putchar, imprimira una nueva linea, de esta manera en la salida de la funcion principal los las columnas se diferenciaran por un salto de linea.
 * en cada vuelta del bucle principal, el bucle secundario imprmira todos los caracteres de la columna correspondientes.
 * asi hasta llegar al final de ambos bucles y posteriormente concluyendo con el codigo y finalizando el ejercicio de manera satisfactoria.
 * conclusiones de este programa:
 * la primera cuestion que me costo aprender fue la de la expresion char (*a)[8] que nos indica que el puntero se dirige a un arreglo de arreglos de caracteres.
 * ademas de que debe escribirse de esa forma para no crear un puntero de punteros.
 * termine de entender como se asigna la iteracion de las filas  colmunas de un arreglo mediante bucles for el cual sin importar que ariable sea o en que orden se usen esas variables iteraran de manera especifica en las filas y columnas.
 * entiendo mas como la funcion putchar accede al indice de las filas para imprimir cada caracter de una columna.
 * para que se impriman los saltos de linea la funcnion putchar interactua fuera del segundo bucle.
 * las variables deberan declararse de manera global, ya que de otra forma el compilador dara un error.
 */

void print_chessboard(char (*a)[8])
{
    int i, j;
    for ( i = 0; i < 8; i++) {
        for ( j = 0; j < 8; j++) {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}
