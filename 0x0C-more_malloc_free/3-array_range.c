#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *mem;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(int) * (max - min));

	if (mem == NULL)
		return (NULL);

	return (mem);
}
