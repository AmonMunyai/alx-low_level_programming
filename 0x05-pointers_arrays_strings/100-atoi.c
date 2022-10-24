#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer converted from string, 0 if none
 */

int _atoi(char *s)
{
	int index = 0;
	int num, digit, sign;
	int flag = 0; /* number found in string, 0 - false */

	num = 0;
	digit = 0;
	sign = 1; /* assume num is positive */

	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9') /* look for number characters */
		{
			digit = s[index] - 48; /* convert each char num to int num */
			num = (num * 10) + digit; /* add int to num */

			if ((s[index - 1] == '-'))
				sign = -1; /* num is negative */

			if (s[index + 1] == ' ')
				break; /* only convert first occurence of num(s) */

			flag++; /* num found in string */
		}
		index++;
	}

	if (flag)
		return (num * sign);
	else
		return (0);
}
