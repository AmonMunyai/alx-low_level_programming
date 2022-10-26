#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy string to
 * @src: string to copy
 * @n: n bytes of src to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	/* Copy src to dest */
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	/* Add '\0' to end of string */
	dest[index] = '\0';

	return (dest);
}
