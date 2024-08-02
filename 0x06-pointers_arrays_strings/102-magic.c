#include <stdio.h>

/** Anotaciones para entender este programa
 * este programa funciona por medio del funcionamiento exlcusivo de el lenguaje de programacion c
 * este accede a la memoria ram creando espacios en memoria de la siguiente manera 
 * a medida que se declaran las variables, c va creando espacios en memoria dedicados a esas variables.
 * en caso de ser un arreglo/array guarda los espacios en memoria declarados.
 * ej : n(espacio en memoria 1 cuyo valor sera nulo ya que no se ha definido) a(espacios en memoria 2,3,4,5,6 cuyo valor sera 0 ya que tampoco se ha dfinido) puntero *p(espacio en memoria 7 el cual aun tampoco esta definido)
 * se definen dos variables a[2] = 1024 elemento 2 de a sera 1024
 * elementos declarados en memoria: 1 2 3 4(1024) 5 6 7
 * se define que el puntero *p apunta al primer espacio en memoria, es decir apunta a n
 * se define p[5] = 98, lo que quiere decir que el espacio 5 del puntero sera 98
 * espacios en memoria: 1(n) 2 3 4(1024) 5 6 7(*p)
 * cuando se define p[5] = 98. a partir del espacio en memoria de puntero se avanzan 5 espacios y se define el valor de 98 en ese espacio en memoria, lo cual nos indica que.
 * espacios en memoria: 1(n) 2 3 4(98) 5 6 7(ptr) y asi reemplazando el valor previo de 1024 por el nuevo valor de 98.
 * este ejercicio al ser avanzado no explica mucho a detalle el tema basico en progamacion, mas bien se usa para especificar el funcionamiento de el lenguaje c.  
 */

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  p[5] = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}