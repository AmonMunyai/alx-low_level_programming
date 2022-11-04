#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0 (success), 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		res = res + atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
