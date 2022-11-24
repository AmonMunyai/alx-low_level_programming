#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: pointer to first element in list_t list
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	unsigned long count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
