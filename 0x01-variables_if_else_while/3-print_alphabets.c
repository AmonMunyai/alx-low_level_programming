#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, A;

	for (a = 'a'; a < 123; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A < 91; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
