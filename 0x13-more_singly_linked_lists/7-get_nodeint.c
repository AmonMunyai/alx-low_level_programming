#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 * @head: pointer to first element in a listint_t linked list.
 * @index: index of the node, starting at 0.
 * Return: nth node at index, NULL if the node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i;

	node = head;

	if (node == NULL)
	{
		return (NULL);
	}

	/* find index */
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			return (node);
		}

		node = node->next;
	}

	/* free memory */
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	return (NULL);
}
