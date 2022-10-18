#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase a-z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
