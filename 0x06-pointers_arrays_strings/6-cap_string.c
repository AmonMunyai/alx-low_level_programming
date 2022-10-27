#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @src: string to capitalize
 * Return: pointer to string
 */

char *cap_string(char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		while (!(src[i] >= 'a' && src[i] <= 'z'))
			i++;

		if (src[i - 1] == ' ' ||
			src[i - 1] == '\t' ||
			src[i - 1] == '\n' ||
			src[i - 1] == ',' ||
			src[i - 1] == ';' ||
			src[i - 1] == '.' ||
			src[i - 1] == '!' ||
			src[i - 1] == '?' ||
			src[i - 1] == '"' ||
			src[i - 1] == '(' ||
			src[i - 1] == ')' ||
			src[i - 1] == '{' ||
			src[i - 1] == '}' ||
			i == 0)
			src[i] -= 32;

		i++;
	}

	return (src);
}
