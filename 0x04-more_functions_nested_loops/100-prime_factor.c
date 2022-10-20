#include <stdio.h>

/**
 * main - finds largest prime factor for 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long div = 2;

	while (div < n)
	{
		if (n % div == 0)
		{
			n /= div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", n);
	return (0);
}

