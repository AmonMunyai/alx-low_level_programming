#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
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
		for (rows = 0; rows < size; rows++) /* rows */
		{
			for (cols = size - 1; cols > rows; cols--) /* print spaces */
				_putchar('.');
			for (c = 0; c < rows + 1; c++) /* print characters */
				_putchar('#');
			putchar('\n');
		}
	}
}
