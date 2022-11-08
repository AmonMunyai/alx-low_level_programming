#include "main.h"

/**
 * create_array - creates an array of characters,
 * and initializes it with a specific character
 * @size: size of array
 * @c: character to make array of
 * Return: pointer to array (success), NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
