#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int rows, cols, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (cols = 1; cols <= (size - rows); cols++)
				_putchar(' ');

			for (c = 1; c <= rows; c++)
				_putchar('#');

			putchar('\n');
		}
	}
}
