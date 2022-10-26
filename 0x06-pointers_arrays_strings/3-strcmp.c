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
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] > s2[i])
            return (15);
        
        else if (s1[i] < s2[i])
            return (-15);
    }

	return (0);
}
