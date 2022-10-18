#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer argument
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar((n % 10) + '0');
	return (n % 10);
}
