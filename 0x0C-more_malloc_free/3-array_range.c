#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *mem, i;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(*mem) * (max - min));

	if (mem == NULL)
		return (NULL);

	for (i = 0; min < max; i++, min++)
		mem[i] = min;

	return (mem);
}
