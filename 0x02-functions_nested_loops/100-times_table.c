#include "main.h"

/**
 * print_times_table - prints the nth times table, starting with 0
 * @n: integer argument
 */
void print_times_table(int n)
{
	int rows, cols, product;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (cols = 0; cols <= n; cols++)
			{
				product = (rows * cols);
				if (cols == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
					else if (product > 99)
					{
						_putchar((product / 100) + '0');
						_putchar(((product / 10) % 10) + '0');
						_putchar((product % 10) + '0');
					}
				}
			}
		_putchar('\n');
		}
	}
}
