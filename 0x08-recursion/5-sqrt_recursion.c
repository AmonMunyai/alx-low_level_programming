#include "main.h"

/**
 * find_root - find square root of a given number
 * @n: given number
 * @root: possible root
 * Return: root if the product of root equal to given number (n)
 * -1 if product of root greater than given number (n)
 */

int find_root(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - return the natural squareroot of a number
 * @n: given number
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
