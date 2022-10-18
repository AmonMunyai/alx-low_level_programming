#include <stdio.h>

/**
 * main - prints the first 50 fibinacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
	long first = 1, second = 2, next;
	int i = 3;

	printf("%ld, %ld", first, second);
	while (i != 50)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
		i++;
	}
	printf("\n");
	return (0);
}
