#include "main.h"

/**
 * print_array - prints n element sof an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
			printf(", ");
	}
	printf("\n");
}
