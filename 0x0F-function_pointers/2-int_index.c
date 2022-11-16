#include "function_pointers.h"

/**
 * int_index - searches for an integer in given array
 * @array: given array
 * @size: size of the given array
 * @cmp: pointer to function
 * Return: the index of the first element for which
 * the cmp function does not return 0, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int int_index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (int_index = 0; int_index < size; int_index++)
	{
		if ((*cmp)(array[int_index]))
			return (int_index);
	}

	return (-1);
}
