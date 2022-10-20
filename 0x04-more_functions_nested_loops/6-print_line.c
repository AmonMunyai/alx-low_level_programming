#include "mian.h"

/**
 * print_line - draws a staight line
 * @n: number of lines to print
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
