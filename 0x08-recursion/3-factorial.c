#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: given number
 * Return: factorial of n,
 * -1 if n is lower than 0 (indicate error)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
