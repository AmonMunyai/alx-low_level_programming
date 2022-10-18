#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char __putchar[9] = "_putchar\n";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(__putchar[i]);
	}
	return (0);
}
