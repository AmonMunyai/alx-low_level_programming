#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @src: string to capitalize
 * Return: pointer to string
 */

char *cap_string(char *src)
{
	char sep[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		while (!(src[i] >= 'a' && src[i] <= 'z'))
			i++;

		j = 0;
		while (src[i - 1] == sep[j])
		{
			src[i] -= 32;
			j++;
		}

		i++;
	}

	return (src);
}
