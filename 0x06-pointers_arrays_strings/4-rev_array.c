#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
	}
}
