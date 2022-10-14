#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers from 00-99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /* first pair */
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++) /* second pair */
			{
				for (o = ones; o <= '9'; o++)
				{
					if (ones != o)
					{
						putchar(tens);
						putchar(ones);
						putchar(' ');
						putchar(t);
						putchar(o);

						if (!((tens == '9' && ones == '8') && (t == '9' && o == '9')))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
