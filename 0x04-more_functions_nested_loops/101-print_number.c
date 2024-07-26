#include "main.h"

/**
 * 
 */

void print_number(int n)
{
    int num = n;
    int divisor = 1;
    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }
    while (divisor != 0)
    {
        _putchar((num / divisor) + '0');
        num %= divisor;
        divisor /= 10;
    }
}