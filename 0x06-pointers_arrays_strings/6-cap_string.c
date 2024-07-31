#include "main.h"

/**
 * 
 */

char *cap_string(char *str)
{
    char *ptr = str;
    char separators[] = " \t\n,;.!?\"(){}";
    int capitalize_next = 1, i;
    while (*str != '\0') {
        if (capitalize_next && *str >= 'a' && *str <= 'z') {
            *str -= 32;
            capitalize_next = 0;
        } else {
            int is_separator = 0;
            for ( i = 0; separators[i] != '\0'; i++) {
                if (*str == separators[i]) {
                    is_separator = 1;
                    break;
                }
            }
            if (is_separator) {
                capitalize_next = 1;
            } else {
                capitalize_next = 0;
            }
        }
        str++;
    }
    str = ptr;
    return str;
}