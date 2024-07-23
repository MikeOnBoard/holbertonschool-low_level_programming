#include "main.h"

/** Anotaciones para entender y poder usar este programa en un futuro
 * ya que son 4 dijitos declararemos 4 variables con el nombre de preferencia
 * al tratarse de unos numeros en raango para cada digito usaremos un bucle for.
 * empecemos por desglosar el ultimo digito, el cual cuenta con 6 putchar, uno correspondiente a cada valor que se debe imprimir:
 * primero la letra a, luego b, luego, el identificador entero de los dos puntos(:), luego c, luego d y por ultimo la impresion de una nueva linea.
 * todos los numeros impresos inician en 0, siendo el ultimo digito(variable d) la cualempieza a subir cada vez que se ejecuta el bulce sin afectar a los demas numeros llegango al numero maximo de 9.
 * una vez ha impreso los numeros del 0 al nueve empieza la iteracion del segfundo numero reiniciando la cuenta tambien en el ultimo digito ya que el bucle for del ultimo digito se encuentra dentro del for del penultimo digito y asi en cada vuelta sumando 1 dijito a c y dando un bucle completo a d.
 * notese que el bucle for de c solo llega hasta 5 ya que ese es el limite normal de un reloj para hacer el cambio de a 10 minutos hasta llegar a completar la hora, mientras que el cuarto digito hace el cambio de minuto a minuto. 
 * despues de esto tenemos hacia afuera una condicion que afecta a las variables c y d e influye a las variables a y b.
 * esta condicion limita la llegada de a y de b, nos aclara que si a llega a 1 y b llega a 9(19:00) pero tambien si a llega a 2 y b a 3(23:00) iniciara la cadena de bucles que se encuentran dentro de esta condicion.
 * con esto indicamos que solo en estos dos momentos se efectuaran los bucles siguientes
 * el segundo digito se encontrara en un rango de 0 a 9 y el primer digito tendra un rango de 0 a 2 siendo afectados solo por la condicion que le sigue.
 * completando asi el conteo del reloj desde las 00:00 hasta las 23:59
 * la cantidad de los bucles dependeran solo de la cantidad de digitos requeridos.
 */

void jack_bauer(void)
{
    int a, b, c, d;

    for ( a = 0; a <= 2; a++)
    {
        for ( b = 0; b <= 9; b++)
        {
            if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
            {
                for ( c = 0; c <= 5; c++)
                {
                    for ( d = 0; d <= 9; d++)
                    {
                        _putchar(a + '0');
                        _putchar(b + '0');
                        _putchar(58);
                        _putchar(c + '0');
                        _putchar(d + '0');
                        _putchar('\n');
                    }
                    
                }
                
            }
            
        }
        
    }
}