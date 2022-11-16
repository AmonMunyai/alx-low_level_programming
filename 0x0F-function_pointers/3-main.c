#include "3-calc.h"

/**
 * main - calculator that performs simple operations
 * @argc: number of arguments passed to main
 * @argv: array of arguments passed to main
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(operator))(num1, num2));

	return (0);
}
