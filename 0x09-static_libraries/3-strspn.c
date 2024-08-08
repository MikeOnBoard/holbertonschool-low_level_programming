#include "main.h"

/** Anotaciones para entender el programa
 * antes de enternder el programa pensaba que era dificil pero no ha sido asi, aveces el bloqueo mental da un poco duro, necesito pensar de nuevo, muchas veces hay que comer o domir y seguir de nuevo, relajar la cabeza y continuar haciendo la labor.
 * en este ejercicio desglosare parte por parte de inicio a fin
 * iniciamos declarando la funcion de tipo unsigned int el cual no tendra en cuenta los numeros con un signo negativo, como su nombre lo dice unsigned(sin signo) int(entero)
 * lo cual nos dice que la funcion debe retornar un entero
 * dentro de la funcion se encuentran dos argumentos, char *s(puntero de un string el cual buscara dentro de sus caracteres la coincidencia de el otro argumento)
 * el otro argumento que encontramos es char *accept(puntero de string el cual contendra los caracteres que buscara el cual iterara cada caracter para encontrar si coincide con alguno de los que encontramos en este string)
 * *s tomara cada elemento y buscara si se encuentra contenido en *accept sumando sumando un digito desde 0 cada vez que se encuentre.
 * esta funcion al estar basada en la funcion original de las librerias en c(strspn) la cual por definicion va a buscar las coincidencias hasta que deje de encontrar un caracter de la segunda cadena argumento
 * una vez deja de encontrar coincidencia deja de buscar y retorna el conteo final.
 * una vez dicho esto explicare linea por linea el codigo para poder comprender y asimilar correctamente la informacion para poder resolver ejercicios mas adelante.
 * definiremos 4 variables cada una con un trabajo distinto: unsigned int count = 0(este digito unsigned sera usado para contabilizar cada que se encuentre una coincidencia entre las dos cadenas) 
 * int i(se usara para iterar y avanzar en los caracteres de *s), j(se usara para iterar y encontrear coincidencias con los caracteres de *accept)
 * int found = 0(es una bandera/interruptor que se usara como una bandera para activar condicionales o romper ciclos dentro de la funcion, mas adelante anotare cada vez que se use esta variable.)
 * para el primer for usaremos la variable i la cual se encargara de avanzar en los caracteres de s* siguiendo las instrucciones a continuacion.
 * se define la bandera found como inactiva por medio del valor 0, cuando ella este en 1 sera activada, esto dependera del siguiente bucle for.
 * dentro de el segundo bucle for entontraremos que el caracter seleccionado como primer elemento de iteracion del primer bucle for sera iterado y recorrera cada uno de los elementos de *accept mediante el segundo bucle for para verificar si coincide con algun caracter del string.
 * para encontrar esa coincidencia usaremos el condicional if, la condicion sera que si el caracter actual de *s es igual al caracter iterado de *accept dara paso a la siguiente instruccion.
 * cambiara el valor de found = 1, esto nos indica que la bandera ha sido activada y por ende ha encontrado una coincidencia, la palabra reservada break rompera el segundo bucle for deteniendo la iteracion de elmentos de *accept.
 * una vez roto el bucle veremos otro condicional el cual mediante la expresion if (!found) nos preguntara si despues de buscar entre los elementos de *accept aun asi no se activo la bandera, el operador !(NO) cambia la expresion buscando que no este activada la bandera found.
 * debido a que se activo, no pasara por este condicional y seguira en el primer bucle for, incrementando la variable i++ y continuando con la iteracion del segundo caracter de *s.
 * cada vez que se ejecute una vuelta del primer bucle for la bandera found reiniciara su valor a 0(desactivada), ademas de esto la variable count aumentara su valor si es encontrado un caracter, llegando asi a contar cada vez que se ha encontrado una coincidencia y sumandola a esta variable.
 * este proceso seguira hasta que el siguiente caracter de *s no coincida con ninguno de los caracteres de *accept
 * en el caso de que no lo encuentre saldra del bucle for porque ha llegado al valor nulo y no ha encontrado coincidencia.
 * lo cual nos da el caso de que despues de buscar la bandera found no fue activada(= 0)
 * cuando esto ocurra, la palabra break rompera el bucle for inicial terminando con la iteracion de los caracteres de s* y retornando el valor de la variable count la cual almacenara el numero de veces que se encontro una coincidencia dentro de *s con los caracteres de *accept.
 * y asi terminando el proceso de la funcion y completando el ejercicio satisfactoriamente.
 * conclusciones del programa:
 * la funcion tiene un final o punto de quiebre el cual es no encontrar coincidencia entre los valores de *accept con el caracter iterado de *s
 * esto depende de las caracteristicas o funcionalidades de la funcion original strspn
 * para poder entender bien los requerimientos de un ejercicio hay que preguntar todo al respecto, incluyendo como funciona la funcion original, y preguntando todos los aspectos posibles vistos desde diferentes perspectivas, solo asi se lograra la solucion sin llegar a perder la cabeza.
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    int found;
    for (i = 0; s[i] != '\0'; i++) {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            break;
        }
        count++;
    }
    return count;
}