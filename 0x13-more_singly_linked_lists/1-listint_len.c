#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list.
 * @h: pointer to first element in linked listiny_t list.
 * Return: the number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	unsigned int count;

	node = h;
	count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
