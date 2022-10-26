#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate to dest
 * @n: n bytes to cat from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	/* Get length of dest */
	while (dest[len] != '\0')
		len++;

	/* Copy n characters from src string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	/* Add null terminator */
	dest[len] = '\0';

	return (dest);
}
