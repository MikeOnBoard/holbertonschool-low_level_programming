#include <stdio.h>

/* Anotaciones para este programa
- para este programa y tambien el anterior hay que entender algunas cosas
1. todo funciona de acuerdo a variables declaradas antes de iniciar la funcion for
2. el bucle for funciona de la siguiente manera for (inicializacion(se define la variable chl como 'a'); condicion(se indica que chl debe ser menor o igual a 'z' para que se cumpla la condicion, no debe superar el limite); incremento(a la variable chl se anade un incremento con el operador ++ incrementando asi una letra despues de la inicial y asi repitiendose hasta llegar a la condicion en este caso llegar a 'z')).
3. estos valores de alfabeto y numeros estan definidos por la llamda de la libreria <stdio.h>
4. una vez definidas las variables chl y chu se procede a implementar la funcion putchar(como las ultimas siglas 'char' indican es en base a una variable char, insertando o escribiendo en la consola o monitor las variables incluidas dentro de la funcion).
*/

int main(void) {
    char chl, chu;

    for (chl = 'a'; chl <= 'z'; chl++) {
        putchar(chl);
    }
    for (chu = 'A'; chu <= 'Z'; chu++) {
        putchar(chu);
    }
    putchar('\n');

    return 0;
}
