#include "main.h"

/**
 * leet - encodes a string into 1337
 * @src: string to encode
 * Return: pointer to string
*/

char *leet(char *src)
{
	char alpha_low[5] = {'a', 'e', 'o', 't', 'l'};
	char alpha_up[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		for (j = 0; j < 5 ; j++)
			if ((src[i] == alpha_low[j]) || (src[i] == alpha_up[j]))
				src[i] = num[j];

	return (src);
}
