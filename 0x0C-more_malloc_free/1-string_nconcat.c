#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of bytes of s2
 * Return: pointer to memory, NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = n; /* len of s2 */

	for (i = 0; s1[i] != '\0'; i++) /* add len of s1 */
		len++;

	str = malloc(sizeof(*str) * len); /* allocate memory */

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i] != '\0'; i++, len++) /* cpy s1 to str */
		str[len] = s1[i];

	for (i = 0; s2[i] != '\0' && i < n; i++, len++) /* cpy s2 to end of str */
		str[len] = s2[i];

	str[len] = '\0'; /* add null terminator */

	return (str);
}
