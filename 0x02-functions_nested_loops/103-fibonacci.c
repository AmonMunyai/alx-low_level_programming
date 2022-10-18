#include <stdio.h>

/**
 * main - prints the first 50 fibinacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
	long first = 1, second = 2, next;
	long sum = 0;

	do
	{
		next = first + second;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	} while (next <= 4000000);
	
	printf("%ld\n", sum);
	return (0);
}
