#include "main.h"

/**
 * 
 * 
 */

char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;
    int i;

    for (i = 0; i < n; i++) {
        if (i < n && src[i] != '\0') {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
    }
    dest = start;
    return dest;
}