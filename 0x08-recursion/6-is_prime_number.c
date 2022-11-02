#include "main.h"

/**
 * prime - returns 1 if given number is a prime number, otherwise 0
 * @n: given number
 * @i: divisible by
 * Return: 1 if prime number, 0 otherwise
 */

int prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if given number is a prime number otherwise 0
 * @n: given number
 * Return: 1 if n is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (prime(n, 2));
}
