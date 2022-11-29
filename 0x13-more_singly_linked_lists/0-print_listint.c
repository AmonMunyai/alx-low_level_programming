#include "lists.h"

/**
 * print_listint - prints all the elements of a linked listint_t list
 * @h: pointer to first element in linked listint_t list.
 * Return: the number of elements in a linked listint_t list.
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	unsigned int count;

	node = h;
	count = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
