#include "function_pointers.h"

/**
 * array_iterator - executes given function on each element
 * of a given array
 * @array: given array
 * @size: size of the given array
 * @action: pointer to functon to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array == NULL || size < 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
