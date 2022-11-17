#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: parameter to print
 * Return: nothing
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: parameter to print
 * Return: nothing
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a floating-point number
 * @args: parameter to print
 * Return: nothing
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: parameter to print
 * Return: nothing
 */

void print_string(va_list args)
{
	char *str;

	str =  va_arg(args, char *);

	(str == NULL) ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: parameter to print
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = ", ";
	va_list args;
	my_type specifier[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format[i] != '\0' && format)
	{
		j = 0;

		while (specifier[j].format_spec != NULL)
		{
			if (*(specifier[j].format_spec) == format[i])
			{
				specifier[j].f(args);

				if (specifier[j + 1].format_spec == NULL)
					separator = "";

				printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
