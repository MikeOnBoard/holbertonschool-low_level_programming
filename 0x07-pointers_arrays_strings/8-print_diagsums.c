#include "main.h"
#include <stdio.h>

/** Anotaciones para entender el programa
 * las anotaciones de este programa seran sustituidas en un futuro para poder avanzar y mas adelante entender el codigo y el porque de manera clara.
 * actualizacion del entendimiento del programa.
 * para poder mejorar la logica de programacion dentro del ejecicio hay que analizar el ejercicio propuesto y el resultado de ejemplo.
 * para ese ejemplo la suma se hara de manera diagonal para que asi se logren dar los resultados requeridos, el mismo nombre de la funcion nos da una pista en este caso.
 * los numeros de cada diagonal son sumados en x de manera que cada esquina de cada matriz terminara siendo sumada con su esquina opuesta, tanto de arriba a abajo, como de izquierda a derecha.
 * esto puede verse si realizamos la suma de dichos numeros en el orden propuesto.
 * para lograr un mejor entendimiento de cualquier ejercicio se debe analizar en busqueda de los patrones.
 * por ahora no describire la funcion linea por linea ya que debo avanzar con el curso, pero escribire otra manera de poder resolver este ejercicio la implementacion de otro codigo.
 * codigo: 
 * void print_diagsums(int *a, int size)
 * {
 *	int i, j;
 *	unsigned int sum = 0, sum2 = 0, aux = 0;
 *
 *	for (i = 0; i < size; i++)
 *	{
 *		for (j = 0; j < size; j++)
 *		{
 *			if (j == i)
 *			{
 *				sum += *(a + aux);
 *			}
 *			if (i + j + 1 == size)
 *			{
 *				sum2 += *(a + aux);
 *			}
 *			aux++;
 *		}
 *	}
 *  poco a poco el entendimiento de todo sera obtenido, la paciencia sera el pan de cada dia pero tambien se deben agotar los recursos que tenemos a la mano como personas o herramientas que tenemos a nuestra disposicion.
 * doy gracias a la vida por darme el conocimiento y la capacidad de la duda ya que ella me ha llevado a donde estoy.
 * hay que continuar ya que solo asi obtendremos la grandeza.
 * palabras clave para este programa:
 * size, diagonal, auxiliar, matriz simple, dos sumas en total, suma en x, condicionales, trabajo en equipo.
 */

void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    for ( i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size + (size - 1 - i)];
    }
    printf("%d, %d\n", sum1, sum2);
}