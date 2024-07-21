#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    
    char num; 
    char letr;

    for( num = '0' ; num <= '9'; num++)
    {
    putchar(num);
    }
    for( letr = 'a'; num <= 'f'; letr++)
    {
        putchar(letr);
    }
    
    putchar('\n');
    return (0);

}