#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 'z'; z > 96; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
