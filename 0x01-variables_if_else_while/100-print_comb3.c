#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = tens; ones <= '9'; ones++)
		{
			if (ones != tens)
			{
				putchar(tens);
				putchar(ones);
				if (!(tens == '8' && ones == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
