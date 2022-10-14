#include <stdio.h>

/**
 * main - print 0-9 separated with commas, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
