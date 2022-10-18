#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @n: number to check
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
