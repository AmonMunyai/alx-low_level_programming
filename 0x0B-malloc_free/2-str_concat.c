#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: pointer to memmory, containing contents
 * of s1, followed by s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	j = 0;
	len = 0;

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[j] = s1[i];
		j++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		concat[j] = s2[i];
		j++;
	}

	concat[len + 1] = '\0';

	return (concat);
}
