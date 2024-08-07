#include "main.h"

/** Anotaciones para entender el programa
 * para poder entender el programa hay que aclarar que las funciones pueden tener una llamada a otra funcion recursiva para poder hayar el valor requerid.
 * para este ejercicio usaremos una funcion extra la cual sera llamada de manera recursiva por la funcion prototipo proporcionada por el ejercicio o funcion principal main.
 * en este ejercicio el objetivo es encontrar la raiz cuadrada de un entero proporcionado por la funcion main.
 * para esto se creara una funcion auxiliar para poder encontrar ese valor.
 * en este caso se declarara la funcion int _sqrt_helper(int n(valor proporcionado en main), int guess(valor el cual se usara para hallar la raiz, con valor inical de 0))
 * dentro de esta funcion tendremos las condiciones necesarias para que la funcion recursiva funcione de manera correcta.
 * la primera condicion sera que si guess(etntero que multiplicado por si mismo nos dara el valor proporcionado por main) * guess > n, es decir que si el resultado de la multiplicacion es mayor al numero proporcionado por main, este debera retornar -1
 * lo cual nos indica que el numero n proporcionado por la funcion main no tiene raiz cuadrada natural.
 * cumpliendo con uno de los requisitos del ejercicio proporcionado.
 * la segunda condicion sera la que nos dara el valor de la raiz cudrada, esta funcion nos dice que si guess * guess == n debera retornar guess, el cual sera la raiz cuadrada.
 * despues tendremos la instruccion en caso de que ninguna de las dos condiciones iniciales se cumplan.
 * esta ser la llamada recursiva que ira aumentando guess al tiempo que sera multiplicado mediante las dos condiciones anteriores, las cuales fungiran de caso base y detendran la llamada recursiva.
 * la expresion de la llamada recursiva sera: return (_sqrt_helper(n,guess + 1(esta suma dentro de los argumentos sera la base fundamental para poder incrementar el valor de guess en cada llamada para asi encontrar la raiz)))
 * debido a que es una funcion de tipo entero, en cada caso condicional debera retornar un valor de tipo entero.
 * una vez se encuentre el valor de la raiz, llamaremos a la funcion prototipo la cual proporcionara el valor n(al cual deberemos hallarle la raiz).
 * dentro de esta funcion tendremos otra condicion principal proporcionada en el ejercicio, la cual dice que si n es menor a 0 debera retornar -1.
 * despues de esto se hara la llamada a la funcion asistente la cual encontrara la raiz de n y en la cual se dara el valor inicial de guess siendo este 0.
 * siendo este el caso contrario a n < 0 y se expresara de la siguiente manera: return (_sqrt_helper(n, 0))
 * dando asi inicio a la llamada recursiva de la funcion asistente y encontrando la raiz de n satisfactoriamente.
 * conclusiones sacadas de este ejercicio:
 * existen funciones que requeriran ayuda de una funcion auxiliar para poder encontrar los valores requeridos, en este caso sera la funcion: int _sqrt_helper(int n, int guess)
 * las condiciones son una de las herramientas fundamentales de todo lenguaje de programacion y en general cuando queremos realizar un algoritmo.
 * de nuevo se tiene que tener en mente absolutamente todos los requerimientos necesarios dentro del ejercicio y transformarlos en las condiciones para que la funcion se ejecute de manera correcta.
 * la funcion prototipo principal debera devovler un entero, es por eso que se retornara la funcion recursiva auxiliara la cual tambien debera retornar un entero.
 */

int _sqrt_helper(int n, int guess);

int _sqrt_helper(int n, int guess)
{
    if (guess * guess > n)
    {
        return (-1);
    }
    if (guess * guess == n)
    {
        return (guess);
    }
    return (_sqrt_helper(n, guess + 1));
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    return (_sqrt_helper(n, 0));
}


