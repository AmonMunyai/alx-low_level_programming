#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';

	while (1)
	{
		if (a > 122)
		{
			break;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
