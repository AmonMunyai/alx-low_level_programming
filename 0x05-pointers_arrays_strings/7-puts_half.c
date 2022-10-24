#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to print in half
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Get len of str */
	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;
	/* Print second half of str */
	while (str[n + 1] != '\0')
	{
		_putchar(str[n + 1]);
		n++;
	}
	_putchar('\n');
}
