#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0-14
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i;
	int digit_a, digit_b;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			digit_a = (n / 10); /* tens place */
			digit_b = (n % 10); /* ones place */
			if (n > 9)
			{
				_putchar(digit_a + '0');
			}
			_putchar(digit_b + '0');
		}
		_putchar('\n');
	}
}
