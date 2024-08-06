#include "main.h"

/** Anotaciones para entender este programa
 * primero debemos entender que es un factorial
 * el factorial de un numero es el reultado entre la multiplicacion de el mismo numero por los anteriores hasta llegar a 0.
 * ejemplo: factorial de 3 = 3 * 2 * 1 = 6.
 * una vez entendido esto hay que tener en cuenta las condiciones que nos dan en ejercicio.
 * la primera es que si n es mayor a 0 se hara la llamada a la funcion siendo n el numero ej 5 * factorial(5-1)(llamada a la misma funcion del numero n menos 1) cada vez que se haga la llamada a la funcion sera del numero anterior a n hasta llegar a 0
 * multiplicando asi todos hasta obtener el resultado.
 * debido a que la funcion es de tipo int debe retornar un entero,debido a esto es que el return debe estar en todas las condiciones siendo esta ultima la condicionde n < 0.
 * en tal caso de ser n= 0 se retornara 1
 * no importa el orden de n *, ya que en este caso el orden de los productos no afecta al resultado.
 * conclusiones del programa:
 * se debe tener en cuenta las condiciones de dicho ejercicio para facilitar su desarrollo y que asi mismo sea mas facil su comprension.
 * en este caso debido a las condiciones en las cuales se presenta la funcion, la llamada recursiva no hara un retorno, sino que llegara a su estado base y ahi retornara el valor.
 * en esta ocasion se pudo resolver el ejercicio con ayuda externa minima.
 */

int factorial(int n)
{
    if (n > 0)
    {
    return factorial(n-1) * n;
    } if (n == 0)
    {
        return (1);
    }
    return (-1);
}