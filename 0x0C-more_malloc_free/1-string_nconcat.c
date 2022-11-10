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
	unsigned int i, j, len;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = 0;

	for (i = 0; s1[i] != '\0'; i++) /* len of s1 */
		len++;

	for (j = 0; s2[j] != '\0' && j < n; j++) /* len of s2 */
		len++;

	str = malloc(sizeof(*str) * len); /* allocate memory */

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* cpy s1 to str */
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++) /* cpy s2 to end of str */
		str[i] = s2[j];

	str[len] = '\0'; /* add null terminator */

	return (str);
}
