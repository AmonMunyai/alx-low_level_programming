#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	/* Count len of s */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Write s to stdout in reverse */
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
