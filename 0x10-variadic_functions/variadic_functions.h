#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct p - structure to hold format specifier and respective function
 * @format_spec: format specifier
 * @f: function call corresponding to format specifier
 */

typedef struct p
{
	char *format_spec;
	void (*f)(va_list);
} my_type;


/* helper functions for print_all */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
