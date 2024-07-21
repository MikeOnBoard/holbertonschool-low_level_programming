#include <stdio.h>

/* Anotaciones para este programa
- para entender el porque de cada una de las lienas del codigo se debe tener en cuenta que:
1. las variables alp, e y q son de tipo char(caracteres) y hay que ser definidas ya que se encuentra en la descripcion del ejercicio a realizar.
2. dentro del bucle for, se encuentra el condicional if, el cual nos dice que si alp: que ya fue definido por las letras de la a a la z, es diferente a la letra e y tambien es diferente a la letra q lo imprima o escriba en la funcion putchar. la funcion se escribe if( alp != 'e' && alp != q)=> entonces nos imprima alp.
*/

int main(void)
{
    char alp, q, e;
    
    q = 'q';
    e = 'e';

    for ( alp = 'a'; alp <= 'z'; alp++)
    {
    if (alp != e && alp != q )
    putchar(alp);   
    }
    putchar('\n');
    return (0);

}