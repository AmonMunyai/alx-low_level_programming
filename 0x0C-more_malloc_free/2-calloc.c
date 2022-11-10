#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of array
 * Return: pointer to allocated memory, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
