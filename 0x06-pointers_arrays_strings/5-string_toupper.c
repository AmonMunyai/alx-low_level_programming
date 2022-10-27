#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @src: string to change
 * Return: pointer to string
*/

char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] -= 32;
	}

	return (src);
}
