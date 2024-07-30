#include "main.h"

/** Anotaciones para entender el programa
 * esta implementacion es distinta a la que se implemento en el modulo anterior en el ejercicio str_reverse
 * pero tambien podria usarse en ese ejercicio.
 * esta implementacion esta pensada para buscar otras opciones dentro de la logica de la programacion y asi no cerrarse a una sola manera de resolver el ejercicio.
 * par entender este ejercicio previamnete se debe tener concimientos basicos acerca de los punteros y de como funcionan las variables temporales.
 * dicho esto explicare linea por linea para que quede en absoluto entendimiento del programa y poder implementar este metodo en futuros ejercicios.
 * empezamos por los argumentos de la funcion void(este tipo de funcion no retorna ningun valor, en este caso se usa para revertir un array, dejando el valor del mismo guardado en la funcion main)
 * los argumentos de la funcion son int *a(este puntero guarda la posicion en memoria del primer caracter del array, en adelante no sera necesario escribir * para referirse de nuevo al mismo ya que el programa lo hara implicitamente) y int n(n = numero de elementos dentro del array, definido en la funcion main(si no se define, el comilador lo hara implicitamente teniendo en cuenta los elementos definidos dentro del array)).
 * declararemos 3 variable y definiremos las mismas 
 * int *start = a : este puntero guardara la direccion en memoria original del espacio en memoria del primer elemento que se encuentra en el array a(*a = primer elemento del mismo.), esta variable indicara el inicio del array o el caracter incial a revertir durante el codigo.
 * int *end = a + n - 1 : este puntero apuntara al espacio en memoria del ultimo caracter del string a mediante la ecuacion dentro de la expresion, en la cual n - 1 nos especifica que debe llegar a el elemento fuera del rango del array(n) restandole 1 por lo cual quedara posicionado en el ultimo valor, esto ocurre porque el el array tiene un numero de elementos paro si se suman a el valor inicial quedara fuera del limite del array.
 * ej : a[5] = a(0), b(1), c(2), d(3), e(4). como vemos n es 5 pero el numero de elementos incrementa a partir de 0, por lo cual el elemento final sera el 4, en este puntola ecuacion toma sentido porque el puntero debe apuntar al ultimo elemento(4) y no al numero de elementos(5), ej: *end = a(0) + n(5)(aqui daria 5 fuera de limite) - 1 = 4(valor del elemento final, es correcto el resultado).
 * int temp : variable temporal que se usara en el revertimiento de los elementos del array para guardar el resultado en cada vuelta.
 * para esto usaremos un bucle while, la condicion del bucle while nos dice que mientras el puntero start sea menor al puntero end(esto significa que a medida que uno vaya aumentando su valor y el otro vaya restando va a ser verdadera la afirmacion pero cuando llegue el momento en que sean iguales se rompera el bucle y dara por terminado el codigo, esto se vera en las lineas de comentarios proximas).
 * las instrucciones del while seran las siguientes:
 * usaremos la varable temporal(temp) para guardar el valor del puntero start del elemento incial
 * ese elemento(*start) sera igual al ultimo elemento(*end)(se invierten).
 * en este punto nos daremos cuenta que el puntero *start sera el que tomara el varlor de el puntero *end y no al contrario, pero despues de esto tendremos que intercambiar el ultimo caracter por el valor del primero.
 * para esto usamos de nuevo la variable temp la cual guardo el valor del caracter inicial.
 * ahora *dest tomara el valor guardado dentro de la variable temp el cual era el valor del caracter inicial.
 * una vez terminado el intercambio se cambiaran de posicion los punteros para que el inicial avance un puesto y el final retroceda un puesto.
 * esto se hara mediante la expresion : start++(avanza un lugar); nueva linea end--(retrocede un lugar).
 * este conjunto de instrucciones se seguira repitiendo dentro del bucle while hasta que los elementos de ambos punteros se encuentren entre si.
 * una vez termine el intercambio, los elementos del puntero argumento *a se habran intercambiado, terminando asi con el codigo e igualmente con el ejercicio propuesto.
 */

void reverse_array(int *a, int n)
{   
    int *start = a;
    int *end = a + n - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
