#include "main.h"

/**
 * 
 */

char *leet(char *str)
{
    char *p = str;
    char lookup[] = "aAeEoOtTlL";
    char replace[] = "44370011";
    for (; *p; p++)
    {
        int i;
        for ( i = 0; lookup[i]; i++)
        {
            if (*p == lookup[i])
            {
                *p = replace[i];
                break; 
            }
        }
    }
    return str;
}