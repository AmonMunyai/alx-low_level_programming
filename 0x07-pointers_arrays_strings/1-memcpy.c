#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to copy
 * @src: memory to copy
 * @dest: copy memory to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
