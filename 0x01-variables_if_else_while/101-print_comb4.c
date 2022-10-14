#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int huns;
	int tens;
	int ones;

	for (huns = '0'; huns <= '9'; huns++) /* print hundreds place */
	{
		for (tens = huns; tens <= '9'; tens++) /* print tens place */
		{
			for (ones = tens; ones <= '9'; ones++) /* print ones place */
			{
				if (!(huns == tens || huns == ones || tens == ones)) /* skip duplicates */
				{
					putchar(huns);
					putchar(tens);
					putchar(ones);

					if (!(huns == '7' && tens == '8' && ones == '9')) /* skip comma at end */
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
