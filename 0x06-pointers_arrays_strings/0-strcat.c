#include "main.h"

/** Anotaciones para entender el programa
 * empecemos por entender el tema de ls direcciones de memoria y punteros.
 * cada variable crea un espacio de memoria en el sistema(memoria ram), al cual se puede acceder o imprmimir mediante las funciones de impresion.
 * los punteros pueden ser del tipo de variable a eleccion.
 * los punteros se inicializan con un * y el nombre identificador del mismo, los punteros guardan un espacio de memoria en el sistema el cual va a apuntar al espacio en memoria de la variable a la cual es igual dicho puntero.
 * un ejemplo podria ser: 
 * int a = 10
 * int *puntero = &a en este caso el puntero debera ser del mismo tipo de la variable declarada y definida.
 * el puntero tiene la opcion de acceder al valor de la variable o acceder al espacion en memoria de la variable.
 * una vez entendido esto empezaremos a realizar el ejercicio propuesto.
 * la funcion prototipo es de tipo char, por lo cual debera devolver un carater o cadena de tipo char al final .
 * esta funcion nos entrega dos argumentos de tipo char, el cual pueden ser un caracter o una caden de caracteres(string).
 * en caso de se un caracter creara un solo espacio de memoria para almacenar este carcter, en caso de ser un string creara un espacio en memoria dependiendo el valor definido, ej: char string[x] donde x es el numero de espacios en memoria establecidos para esa string.
 * en caso de no espeficicarse los espacios en memoria se estableceran de manera implicita incluyendo un caracter nulo al final del string ej: chart string = "hola mundo\0" en este caso el string tiene 11 espacios en memoria dedicados siendo el espacio 11 ocupado por el caracter nulo.
 * cuando se crea un puntero sobre un string char *str, el puntero apunta al espacio en memoria almacenado en el primer caracter, hasta que se cambie ese espacio en memoria por el de algun otro caracter.
 * dicho esto cada uno de los argumentos sera una variable de tipo string las cuales tendran un puntero que apuntaran al primer caracter de cada una.
 * ejemplo:  char *dest(apunta a la direccion en memoria del primer caracter) char *src(puntero apunta al espacio en memoria donde se almacenara el primer caracter)
 * dentro del ejercicio tendremos que modificar dicho puntero haciendo que apunte al espacio en memoria de otro caracter.
 * por lo cual antes de modificar el puntero, crearemos una variable para guardar la direccion en memoria del primer caracter del string que modificaremos mas adelante.
 * esta variable sera char *backup = dest(puntero que apunta al espacio en memoria del primer caracter, no es necesario colocar *, ya que previamente sabemos que ya cuenta con el puntero, si lo colocamos podra arrojarnos un error en el codigo);.
 * una vez guardamos ese espacio en memoria, procederemos a crear un bucle while el cual modificara el puntero de la variable dest.
 * el bucle while accedera al puntero de dest y nos dice que mientras este sea diferente al caracternulo incrementara el valor del puntero, haciendo que este se mueva hasta el espacio en memoria del caracter anterior al caracter nulo.
 * una vez llegue a alli habra cambiado el valor del puntero haciendo que ya no apunte al primer espacio que tiene guardado en memoria sino que llegara al ultimo espacio en memoria antes del caracter nulo.
 * ej; *char = "Hello \0" al inicio antes del interactuar con el bucle while el puntero apuntara al espacio en memoria de la letra 'h'.
 * una vez haya salido del bucle while dicho puntero quedara apuntando al espacio en memoria del caracter ' ', siendo este el caracter anterior al caracter nulo.
 * a partir de aqui el puntero tomara ese valor durante el resto de codigo hasta que sea cambiado.
 * una vez nos encontramos en este espacio lo siguiente que haremos sera concatenar los espacios de memoria de dest, añadiendo cada unos de los caracteres del string src(source o variable ebjetivo a copiar).
 * para esto utilizaremos un bucle for.
 * bedido a que ya tenemos el string dest iterado, iteraremos el string src para que empiece a copiar los caracteres.
 * para esto el rango for iterara hasta llegar al valor nulo gracias a la expresion *src(aqui estamos teniendo en cuenta el puntero de el espacio en memoria del primer caracter) != '\0'(el bucle iterara o dara vueltas hasta llegar al valor nulo)
 * una vez termine la accion dentro del bucle for, los punteros de cada una de las string aumentaran un valor, moviendose hasta llegar al valor nulo de la primera variable src.
 * la accion dentro del bucle for nos dice que a medida que se aumente un valor del puntero en dest, este sera igual al caracter de la variable src referenciado por el puntero.
 * esto nos dira que despues del caracter ' ' en la variable dest aumentara un espacio en memoria el cual tomara el valor del caracter especificado en el puntero de la segunda variable src.
 * el fin sera concatenar o añadir cada uno de los caracteres de la variable src a la variable dest.
 * una vez finalizado el bucle for la variable dest sera igua a "hello world!" e igual que el bucle while el puntero de cada uno sera movido al lugar especificado por el bucle for
 * para la variable src el puntero apuntara a world!*(\0)  y para la variable dest apuntara a hello world!*(\0).
 * segun parece ya tenemos concatenadas ambas string.
 * pero ya que la funcion nos entrega un puntero sipo string, deberemos devolver un puntero del mismo tipo.
 * pero al devolverlo el puntero de la variable dest, no nos imprimira nada, ya que el puntero aun apunta al espacio en memoria en el cual se almacena el valor nulo.
 * para solucionar esto deberemos tener en cuenta que al inicio guardamos un puntero de nombre backup el cual apunta a la direccion en memoria del primer caracter de la variable dest.
 * char *backup = dest; 
 * lo haremos con la siguiente expresion: dest = backup;, de esta manera el puntero de la variable dest retornara su possicion inicial y apuntara al espacio en memoria el cual almacena el primer caracter del string dest.
 * una vez restaurado solo nos queda devolver un puntero de tipo char con la siguiente expresion:
 * return dest; y asi dando por solucionado el ejercicio y terminado el codigo que funcionara dentro de la funcio main que llama a esta funcion prototipo.
 * nota: para este ejercicio fue requerido estudiar un poco el tema de punteros para poder resolverlo y tambien usar una herramienta debugger online para mayor claridad.
 */

char *_strcat(char *dest, char *src)
{   
    char *backup = dest;
    while ( *dest != '\0')
    {
         dest++;
    }
    for ( ; *src != '\0'; src++,dest++)
    {
        *dest += *src;
    }
    dest = backup;
    return dest;
}