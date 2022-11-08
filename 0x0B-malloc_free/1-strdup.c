#include "main.h"

/**
 * _strdup - returns pointer to memory, which
 * contains a copy of a given string
 * @str: given string
 * Return: pointer to memory, containing copy of str,
 * NULL otherwise
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];

	return (cpy);
}
