#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int digit;

	for (digit = '0'; digit < 58; digit++)
	{
		putchar(digit);
	}

	for (a = 'a'; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
