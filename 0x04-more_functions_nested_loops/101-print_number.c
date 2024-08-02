#include "main.h"

/** Anotaciones para entender el programa
 * este programa se puede volver complejo para alguien que no se relaciona mucho con la matematica o que aun no ha entendido tanto la logica de la programacion, es por eso que sera redactado linea por linea para facilitar la comprension y absorcion de informacion del autor y posible lector.
 * crearemos una variable de tipo entero llamada num, la cual guardara el valor de la variable n para poder interactuar con ella sin cambiar su valor origina(se mantiene n, se trabaja con la variable num con mismo valor de n)
 * se declarara una variable tipo entero llamada divisor = 1(valor inicial) la cual se usara para determinar el valor del divisor necesario para extraer cada digito del numero proporcionado(variable n), mas adelante veremos de que manera lo usaremos.
 * para empezar debemos reconocer si el numero ingresado es positivo o negativo, para esto se crea un condicional if, la condicion sera: si n < 0(si n es menor a 0) y contendra dentro las siguientes instrucciones.
 * si n es menor lo primero que hara el codigo sera imprimir el signo negativo mediante la funcion putchar, para asi iniciar la escritura del numero completo en la salida de la funcion main la cual proporciona el numero inicial.
 * ej: numero -234, imprime primero el signo - para despues proceder a extraer e imprimir cada uno de los digitos siguientes.
 * lo siguiente que hara sera cambiar el valor de la variable num, esto gracas a la siguiente expresion.
 *  num(variable con el valor inicial de n) = -n(-(nen caso de ser negativo)) en este caso el signo negativo antes de la variable n actuara como operador unario, esto significa que si el valor inicial de n es negativo transformara el valor a positivo.
 * ej: numero -234 entonces -(-234) esto hara que ambos signos se multipliquen entre si, despejando y convirtiendose en signo positivo dando como resultado el numero 234.
 * al ser un operador unario nos aclara que si influye sobre un operando en este caso n cambiara su signo : si n es negativo con este operador quedara positivo y si es positivo quedara convertido en negativo, dicho en otras palabras si se coloca antes de un numero invertira su signo.
 * si el caso de que el numero no es negativo no se correra el condicional siguiendo en el codigo hacia el primer bucle while que se encuentra en el codigo.
 * la condicion para que este bucle se ejecute es while(mientras) (num(valor absoluto de n) / divisor(empezando por el valor de 1) >=(mayor o igual a) 10)esto nos dice que mientras el numero resultante de la operacion sea mayor o igual a 10 se ejecutara la siguiente instruccion.
 * divisor *= 10 esto nos dice que si dicho numero resultante es mayor a 10 el valor dentro de divisor sera multiplicado y ese valor sera el nuevo valor de la variable divisor.
 * ej: si el numero empieza siendo 98 y divisor 1: 98 / 1 = 98 siendo mayor que 10 por lo que ahora divisor vale 10, 98 / 10 = 9 como el numero resultante es 9 se rompe el bucle ya que 9 es menor a 10.
 * una vez el codigo ejecute la operacion no le quedara otra mas que salir de bloque, a continuacion ejecutara otro bucle while.
 * el proximo bucle while tiene como condicion para salir de bloque la siguiente expresion While(mientras) (divisor(actual valor= resultado del bucle anterior) !=(operador logico de diferencia) 10 ) mientras el numero divisor sea distinto de 0 el bucle se seguira ejecutando, para cambial el resultado el bucle while seguira las siguientes instrucciones.
 * _putchar((num / divisor(esta expresion nos dara el primer digito del numero/valor de n en absoluto ej: 98 / 10 = 9)) + '0'(cuyo valor en el codigo ascii es 48 y sera sumado al numero resultado de la expresion anterior 9 + 48 = 57(cuyo caracter en ascii es '9'))).
 * en resumidas palabras esta expresion sumara el numero resultado de la operacion aritmetica al valor de 48(caracter '0') dando restultado el numero correspondientente al numero en el codigo ascii y este caracter sera impreso por la funcion putchar.
 * num %=(numero sera resultado de el modulo de ) divisor(valor actual) esto con el fin de retirar el primer numero ya impreso y continuar con la operacion hasta imprimir el ultimo numero.
 * ej : 98 %= 10 = 8 
 * luego el paso a seguir sera dividir el divisor por 10, ej : 10/10 = 1
 * ya tenemos el ultimo digito del numero completo el cual es 8 pero por ahora aun divisor es diferente a 0 por lo cual se repetira de nuevo el bucle.
 * la funcion no tocara el bucle anterior ya que en este momento el divisor no es mayor a 10 pero si es diferente a 0
 * paso siguiente sera imprimir el numero resultante dentro de la operacion dentro de la funcion putchar.
 * 8 / 1 = 8 + '0' = '8'
 * una vez se imprime ese numero el siguiente paso sera dar un nuevo valor a num, el cual sera el serulado de el modulo& de divisor(1) el resultado sera 0
 * por lo cual el programa sabra que estamos a un paso de terminar.
 * el ultimo paso sera dividir el divisor en 10, resultado el cual sera 1/10 = 0.1 pero ya que es un entero se tomara el valor de 0, a diferencia que si fuera float tomaria el valor de los decimales.
 * gracias a que el valor del divisor es 0 el ultimo bucle se rompe, y asi ha logrado imprimir todos los digitos del numero mediante la funcion putchar.
 * es necesario y preciso entender que este mundo es de entendimiento y correlacion entre los conocimientos basicos con ideas para llegar a buscar una solucion.
 * si algo no se sabe hay que buscar aprenderlo y lograr el completo entendimiento ya que asi sabremos como implementar las herramientas que tienes a tu alcance para lograr los objetivos propuestos. 
 */

void print_number(int n)
{
    int num = n;
    int divisor = 1;
    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }
    while (divisor != 0)
    {
        _putchar((num / divisor) + '0');
        num %= divisor;
        divisor /= 10;
    }
}