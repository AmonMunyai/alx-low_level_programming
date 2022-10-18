#include "main.h"

/**
 * _islower - check if c, is lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if upppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
