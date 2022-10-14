#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers from 00-99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 98; first++) /* first pair */
	{
		for (second = first + 1; second <= 99; second++) /* second pair */
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');

			if (first == 98 && second == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
