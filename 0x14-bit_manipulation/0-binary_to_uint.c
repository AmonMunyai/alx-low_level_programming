#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 * Return: the converted number, or 0 otherwise.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal, base, len;

	base = 1;
	decimal = 0;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	for (len = 0; *(b + len) != '\0'; len++)
	{
		;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (*(b + i) >= '0' && *(b + i) <= '1')
		{
			if (*(b + i) == '1')
			{
				decimal += base;
			}
			base *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (decimal);
}
