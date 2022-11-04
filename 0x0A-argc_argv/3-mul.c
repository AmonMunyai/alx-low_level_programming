#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of commandline argumnets
 * @argv: array of commandline arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, res;

	res = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
