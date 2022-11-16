#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform operation
 * @s: operator to perform
 * Return: pointer to function corresponding to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while ((ops[i].op != NULL) && (*s != *(ops[i].op)))
		i++;

	return (ops[i].f);
}
