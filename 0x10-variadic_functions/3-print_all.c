#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: parameter to print
 * Return: nothing
 */

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - prints an integer
 * @args: parameter to print
 * Return: nothing
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - prints a floating-point number
 * @args: parameter to print
 * Return: nothing
 */

void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
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
	char *separator = "";
	va_list args;
	my_type specifier[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	i = 0;

	while (format[i] != '\0' && format)
	{
		j = 0;

		while (j < 4 && (format[i] != *(specifier[j].format_spec)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			specifier[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
