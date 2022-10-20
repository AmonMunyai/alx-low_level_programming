#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int height, width, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= (size - height); width++)
				_putchar(' ');

			for (c = 1; c <= height; c++)
				_putchar('#');

			putchar('\n');
		}
	}
}
