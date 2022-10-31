#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string argument
 * @c: character to locate
 * Return: pointer to first occurence of c in string s,
 * NULL if character not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);

	return (NULL);
}
