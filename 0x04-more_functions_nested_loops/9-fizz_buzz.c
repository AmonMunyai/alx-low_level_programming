#include "main.h"

/**
 * main - prints the numbers, 1-100, Fizz for mul of 3, Buzz for mul of 5
 * and FizzBuzz for mul of 15
 * Return: 0 (Success)
 */

int main(void)
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
}
