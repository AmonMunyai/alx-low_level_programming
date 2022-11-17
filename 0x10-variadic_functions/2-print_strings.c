#include "variadic_functions.h"

/**
 * print_strings - prints strings given as parameters,
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 * @...: a variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (n < 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
