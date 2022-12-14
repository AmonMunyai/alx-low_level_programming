#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++) /* rows */
	{
		for (j = 0; j <= 9; j++) /* cols */
		{
			n = (i * j);

			if (j == 0)
			{
				_putchar(n + '0');
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
