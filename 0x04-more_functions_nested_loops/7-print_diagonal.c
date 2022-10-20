#include "main.h"

/**
 * print_diagonal - draws a staight line
 * @n: number of `\` to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
