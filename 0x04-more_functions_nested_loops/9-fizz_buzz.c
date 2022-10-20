#include "main.h"

/**
 * main - prints the numbers, 1-100, Fizz for mul of 3, Buzz for mul of 5
 * and FizzBuzz for mul of 15
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
