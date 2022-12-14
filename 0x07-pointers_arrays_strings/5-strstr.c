#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to seacrch through
 * @needle: substring to locate in haystack
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	do {
		for (i = 0; haystack[i] == needle[i] ; i++)
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
		}
	} while (*haystack++);

	return (NULL);
}
