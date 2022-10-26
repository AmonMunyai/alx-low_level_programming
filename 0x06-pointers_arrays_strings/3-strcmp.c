#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 (s1 match s2), -15 (s1 less than s2)
 * or 15 (s1 greather than s2)
 */

int _strcmp(char *s1, char *s2)
{
	int res_s1, res_s2;
	int i, j;

	res_s1 = 0;
	res_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++) /* Calculate s1 */
		res_s1 += s1[i];

	for (j = 0; s2[j] != '\0'; j++) /* Calculate s2 */
		res_s2 += s2[j];

	/* Compare s1 with s2 */
	if (res_s1 > res_s2)
		return (15);

	else if (res_s1 < res_s2)
		return (-15);

	return (0);
}
