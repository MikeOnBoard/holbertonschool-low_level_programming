#include "main.h"

/** Anotaciones para entender el programa
 * para este programa es necesario aclarar linea por linea para no perder el rumbo.
 * los conocimientos previos seran simplificados para hacer enfasis en lo nuevo de manera que sera entendido y asimilado correctamente.
 * creamos el puntero para guardar str original
 * creamos un string llamado separators : separators[] = "\t\n,;.!?\"(){}" este string contiene todos los separadores que mencionan en el ejercicio, los cuales tendran gran importancia a lo largo del desarrollo del codigo.
 * se creara duna variable la cual actuara como una bandera/interruptor, tendra un valor para capitalizate_next = 1 y se usara para intervenir en partes escenciales del codigo y dar paso o bloquear la ejecucion de cierta parte del codigo.
 * se creara una variable i la cual sera el indice del bucle for pero tambien iterara sobre los caracteres del string separators.
 * como siempre usaremos un bucle while par iterar sobre los/la caracteres/longitud del string.
 * dentro del while empezaremos usando un condicional if, el cual tendra 3 condiciones separadas por un operador logico = && 
 * debido a que la bandera capitalizate_next inicia con valor 1 quiere decir qu esta activa o encendida.
 * la primera condicion requiere que la bandera se encuentre activa, la segunda y tercera indican que *str debe estar dentro de las letras minusculas en codigo ascii, este condicional sirve para detectar las letras minusculas y detectar que la bandera que creamos se encuentra activa o no para activar o desactivar el condicional.
 * dentro del condicional se encontraran dos instrucciones, una por un lado sera volver la letra minuscula si es detectada(esto ya vimos como hacerlo en el ejercicio pasado) y la gunda desactivara/apagara o cambiara el valor de la bandera a = 0, esto con el fin de que si despues de esa letra encuentra mas letras minusculas no las capitalice y solo capitalice las primeras letras de cada palabra.
 * si alguna de estas condiciones no se cumple, tenemos un else.
 * dentro de este else se creara otra bandera is_separator = 0(desactivada/apagada), la cual solo sera usada de manera local dentro de la funcion else y no se podra usar por fuera de la misma.
 * dentro de la funcion else se creara un bucle for el cual iterara sobre los caracteres dentro del string separators, definiendo la variable i = 0. iterando sore separators[i] != '\0'(hasta llegar al caracter nulo) ; i++(en cada vuelta aumentara el valor de, avanzando asi cada caracter del string)
 * esto con el fin de reconocer si el siguiente caracter de *str es un caracter separador.
 * en el caso de que lo sea cambiara el valor de la bandera local a 1 y rompiendo el bucle for local y continuando con la siguiente instruccion dentro del condicional else.
 * la siguiente instruccion sera un condicional que itera o realiza una accion dependiendo de si la bandera local esta activada o desactivada, en tal caso de estar activada(se encontro un separador en *str) activara la bandera global creada al inicio de la funcion, saliendo del condicional else y volviendo a iniciar el primer condicional.
 * esto significa que dentro del string se encontro un separador y lo siguiente que hara sera reconocer la primera letra de la siguiente palabra y reconocer si es minuscula o si vuelve a ser un separador mediante los condicionales creados.
 * si cuando *str avanza y no encuentra un separador pero ya capitalizo una letra la bandera global seguira apagada y *str seguira avanzando, este caso se puede dar porque el el string principal hay unos numeros, los cuales terminan y de nuevlo encuentran un separador, para volver a activar la bandera grlobal y seguir capitalizando la primera letra de cada palabra.
 * al principio es dificil de entender o explicar pero a medida que avanza el codigo y se interpreta, todo empieza a tener sentido. en tal caso de no entender se leera las veces que sean necesarias.
 * tenga paciencia que si mas adelante se encuentra con un obstaculo mental, tiene todas las herramientas disponibles para mejorar la comprension de la logica de programacion. en algun momento todo se conectara de manera que podra hacer las cosas solo y empezar a crear programas por su cuenta.
 */

char *cap_string(char *str)
{
    char *ptr = str;
    char separators[] = " \t\n,;.!?\"(){}";
    int capitalize_next = 1, i;
    while (*str != '\0') {
        if (capitalize_next && *str >= 'a' && *str <= 'z') {
            *str -= 32;
            capitalize_next = 0;
        } else {
            int is_separator = 0;
            for ( i = 0; separators[i] != '\0'; i++) {
                if (*str == separators[i]) {
                    is_separator = 1;
                    break;
                }
            }
            if (is_separator) {
                capitalize_next = 1;
            } else {
                capitalize_next = 0;
            }
        }
        str++;
    }
    str = ptr;
    return str;
}