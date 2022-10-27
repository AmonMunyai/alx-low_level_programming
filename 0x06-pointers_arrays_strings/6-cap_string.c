#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @src: string to capitalize
 */

char *cap_string(char *src)
{
    char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
    int i, j;

    for (i = 0; src[i] != '\0'; i++)
    {
        if (src[i] >= 'a' && src[i] <= 'z') /* lowercase letters */
        {
            for (j = 0; j < 13; j++) /* capitalize if preceeded by sep character */
                if (src[i - 1] == sep[j])
                    src[i] -= 32;
        }
    }

    return (src);
}