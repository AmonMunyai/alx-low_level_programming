#include <stdio.h>

/**
 * main - prints the sum of the even valued terms in the fibonacci, not exceeding 4,000,000
 * Return: 0 (Success)
 */
int main(void)
{
	long first = 1, second = 2, next;
	long sum = 2;

	do {
		next = first + second; /* next number in sequence */
		if (next % 2 == 0)
		{
			sum += next; /* add even valued terms */
		}
		first = second;
		second = next;
	} while (next <= 4000000);

	printf("%ld\n", sum);
	return (0);
}
