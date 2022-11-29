#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first element in a listint_t linked list.
 * @idx: index of the list where the new node should be
 * added, index starts at 0.
 * @n: integer.
 * Return: the address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i;

	temp = *head;

	node = malloc(sizeof(listint_t)); /* allocate memory */

	if (node == NULL) /* validate memory */
	{
		return (NULL);
	}

	node->n = n; /* populate new node */

	if (idx == 0) /* find index */
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		for (i = 0; temp != NULL; i++)
		{
			node->next = temp->next;

			if (i == (idx - 1))
			{
				temp->next = node;
				return (node);
			}

			temp = temp->next;
		}
	}

	return (NULL);
}
