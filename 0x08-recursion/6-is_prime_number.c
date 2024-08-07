#include "main.h"

/** Anotaciones para entender el programa
 * Para verificar si un número 𝑛 es primo, no es necesario probar todos los posibles divisores hasta 𝑛−1. Basta con probar hasta la raíz cuadrada de 𝑛. Esto se debe a que si 𝑛 tiene un divisor 𝑑 mayor que su raíz cuadrada, entonces debe tener un divisor menor que su raíz cuadrada.
 * una vez entendido esto vamos a desglosar el codigo para tener mayor entendimiento del mismo.
 * para lograr resolver el ejercicio con la funcion prototipo es necesario crear una funcion auxiliar para poder saber si el entero n es un numero primo o no.
 * como siempre se puede declarar la funcion y despues definirla o para optimizar el codigo se declarara y se definira a la vez.
 * en este caso para optimizar declararemos y definiremos la funcion auxiliala cual sera: int(tipo  de funcion) is_prime_helper(int n(entero principal), int divisor(entero con el cual realizaremos distintas operaciones para poder saber si n es o no primo)).
 * dentro de la funcion auxiliar tendremos varias condiciones que facilitaran su fincionalidad, la primera sera si (divisor * divisor > n) y su unica instruccion sera return 1.
 * esto nos quiere decir que a medida que divisor aumente sera multiplicado para saber si n tiene raiz cuadrada natural, otro punto a tener en cuenta es que si el divisor * divisor es mayor a n sera primo, ya que no encontro un numero diferente a 1 y a n cuyo resultado de n.
 * el proximo condicional nos dira que si n % divisor = 0 retornara 0, esto debido a que los numeros primos no tienen divisores el cual no entregue un resto que no sea el mismo numero.
 * por lo cual en este condicional esta descartanto todos los multiplos de 2,3,5,7,11 y 13.
 * de no cumplir con ninguna de las condiciones anteriores se hara la llamada recursiva de la funcion sumando + 1 al divisor en cada llamada por medio de la siguiente expresion.
 * return is_prime_helper(n, divisor + 1) con esto la recursion aumentara en cada llamada el valor del divisor meintras los condicionales verificaran el valor de divisor y tambien si n es o no numero primo.
 * dentro de la funcion prototipo siguiente, la cual hace la llamada recursiva a la funcion auxiliar encontraremos solo una condicion.
 * esta nos dira que si n es menor o igual a uno no sera un numero primo y retornara 0, de lo contrario hara la llamada a la funcion auxiliar, para encontrar si n es o no un numero primo.
 * completando asi el ejercicio con exito y terminando asi el codigo de manera satisfactoria.
 * conclusiones de este codigo:
 * no podia encontrar una manera para poder saber si el numero es primo, sin la necesidad se dividir un numero entre n - 1 y mayor a 1 para poder encontrar el resultado.
 * esto fue hasta que por medio de la ayuda de chat gpt aprendi una manera mas eficiente de hacerlo por medio de la raiz cuadrada del mismo.
 * existen varias maneras d lograr el resultado esperado, pero esto requiere comprender como funciona y tomar un descanso para poder tomar con mas calma este ejercicio y poder verlo desde otra perspectiva.
 */

int is_prime_helper(int n, int divisor)
{
    if (divisor * divisor > n)
    {
        return 1;
    }
    if (n % divisor == 0)
    {
        return 0;
    }
    return is_prime_helper(n, divisor + 1);
}

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    return is_prime_helper(n, 2);
}
