#include "main.h"

/**
 * _strcpy - copies string pointed to by src, to buffer pointed by dest
 * @dest: buffer
 * @src: pointer to source string
 * Return: the point to dest
*/

char *_strcpy(char *dest, char *src)
{
    int index = 0;

    /* get src string len */
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }

    /* add null byte `\0` */
    dest[index] = '\0';
    
    return dest;
}