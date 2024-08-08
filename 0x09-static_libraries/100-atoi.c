#include "main.h"

/**
 * _atoi - Convierte una cadena de caracteres en un número entero.
 * @s: La cadena de caracteres a convertir.
 *
 * La función recorre la cadena de caracteres y convierte la parte numérica
 * en un número entero. Maneja signos positivos y negativos y toma en cuenta
 * solo la primera secuencia de dígitos encontrados. Los caracteres no numéricos
 * que siguen a los dígitos interrumpen la conversión. Si no se encuentra ningún
 * dígito en la cadena, la función devuelve 0.
 *
 * Proceso:
 * 1. Inicializa `sign` para controlar el signo del número (positivo o negativo).
 * 2. Inicializa `result` para acumular el valor numérico final.
 * 3. Inicializa `found_number` como una bandera para indicar si se ha encontrado
 *    al menos un dígito en la cadena.
 * 4. Recorre la cadena usando un bucle `for`:
 *    - Si encuentra un signo negativo (`'-'`), cambia el signo del número.
 *    - Si encuentra un dígito (`48` a `57`, en valores ASCII para `'0'` a `'9'`),
 *      activa la bandera `found_number` y acumula el valor del dígito en `result`.
 *    - Si encuentra un carácter no numérico después de haber encontrado dígitos,
 *      termina la conversión.
 * 5. Después de recorrer la cadena, si no se encontró ningún dígito (`found_number`
 *    sigue siendo `0`), devuelve `0`.
 * 6. Devuelve el número entero final ajustado por el signo correcto.
 */

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int found_number = 0;
    for ( ; *s ; s++ ) 
    {
        if (*s == '-') {
            sign = -sign;
        }
        if (*s >= 48 && *s <= 57 ) {
            found_number = 1;
            result = result * 10 + (*s - '0');
        } else if (found_number) {
            break;
        }
    }
    if (!found_number) {
        return 0;
    }

    return result * sign;
}