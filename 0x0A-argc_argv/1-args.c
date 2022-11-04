#include "main.h"

/**
 * main - prints the number of commandline arguments passed into it
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int nargs;

	nargs = argc - 1;
	_putchar(nargs + '0');
	_putchar('\n');
	return (0);
}
