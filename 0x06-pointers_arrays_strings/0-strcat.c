#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append
 * @src: appended to dest
 * Return: pinter to dest
*/

char *_strcat(char *dest, char *src)
{
    int len, i = 0;

    /* Get length of dest*/
    for (len = 0; dest[len] != '\0'; len++);

    /* Concatenate src to dest */
    while (src[i] != '\0')
    {
        dest[len] = src[i];
        len++;
        i++;
    }

    /* Add '\0' */
    dest[len] = '\0';
    
    return (dest);
}