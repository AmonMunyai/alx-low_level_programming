#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char c;

	/* Get string len */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Reverse string */
	while (index < len)
	{
		c = s[len - 1];
		s[len - 1] = s[index];
		s[index] = c;
		index++;
		len--;
	}
}
