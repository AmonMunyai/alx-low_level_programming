#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check
 * @accept: bytes to accept
 * Return: n bytes in initial segement of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}

		if (s[i] != accept[j])
			return (n);
	}

	return (n);
}
