#include "main.h"

/** Anotaciones para entender el programa
 * este ejercicio es avanzado pero me parecio interesante la forma en la que se puede resolver el mismo.
 * para esto necesitaremos dos funciones auxiliares, las cuales determinaran primero la longitud de la cadena y la otra sera para comparar si se encontro algun caracter distindo mientras se comparan sumando desde el primer caracter y restando desde el ultimo caracter.
 * la primera funcion auxiliar, sera strlen la cual se usa para determinar la longitud de la cadena y la cual ya fue creada en ejercicios pasados, por esa razon no entrare en detalle sobre la misma.
 * la segunda funcion auxiliar sera int check_palindrome(char *s, int start(entero usado como posicionamiento de caracter 1), int end(entero de posicionamiento de caracter 2))
 * dentro de esta funcion encontraremos dos condicionales ademas de la llamada recursiva cuando no se presenta el caso base.
 * el primer condicional sera el que retornara  1(valor determinante para saber si char *s es palindromo o no), la condicion es: if (start >= end), esto nos dice que si se han compaarado todos los caracteres, es palindromo ya que no se activo el segundo condicional.
 * este condicional nos dice: if (s[start] != s[end]), esto se refiere a que si algun caracter comparado en el orden ascendente para el primer caracter y decreciente para el ultimo caracter es diferente entre si, retornara el valor de 0, indicandonos que no es un palindromo.
 * mientras ninguna de estas dos condiciones sea verdadera, se hara un llamado recursivo a la misma funcion aumentando el primer caracter y decrementando el ultimo caracter mediante la siguiente epresion.
 * return check_palindrome(s, start + 1, end - 1) de esta manera cada vez que sea llamada la funcion de manera recursiva aumentara 1 el valor de start y restara 1 el valor de end.
 * asi hasta haber checkeado todos los caracteres.
 * por ultimo tenemos la funcion prototipo principal, la cual necesita llamar a cada funcion auxiliar respectivamente.
 * dentro de la funcion lo primero que se hara es llamar a la funcion _strlen_recursion la cual pasara su valor a la variable de tipo entero len.
 * la cual se usara dentro del primer condicional, el cual verificara si len == 0, en otras palabras verificara si la longitud de la cadena es 0 o vacia, si es asi el condicional retornara 1 siendo esta cadena vacia un palindromo tambien.
 * por ultimo de otro modo se retornara la llamada recursiva a la funcion auxiliar check_palindrome(s, 0, len - 1) los argumentos de dicha funcion auxiliar seran definidos dentro de la funcion prototipo.
 * siendo start = 0 y end = len(longitud total de la cadena) - 1(esto debido a que la longitud incluye al valor nulo, por esa razon empieza un caracter menos al valor nulo.)
 * de acuerdo al funcionamiento del codigo, de esta manera cualquier cadena sera comparada para verificar si es o no es palindroma y asi terminando de manera satisfactoria el ejercicio.
 * conclusiones del programa:
 * dentro de algunos ejercicios puede ser requerido usar mas funciones para su correcta realizacion.
 * se debe tener muy en cuenta toda la logica que conlleva realizar cada ejercicio, y con cada ejercicio nuevo tener en cuenta los anteriores para tener los datos o conocimientos basicos necesaarios para poder diseñar el codigo de manera correcta.
 */

int _strlen_recursion(char *s) {
    if (*s == '\0') {
        return 0;
    }
    return 1 + _strlen_recursion(s + 1);
}

int check_palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (s[start] != s[end]) {
        return 0;
    }
    return check_palindrome(s, start + 1, end - 1);
}

int is_palindrome(char *s) {
    int len = _strlen_recursion(s);
    if (len == 0) {
        return 1;
    }
    return check_palindrome(s, 0, len - 1);
}