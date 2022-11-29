#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, and sets the head to NULL.
 * @head: pointer to first element in a linked listint_t list.
*/

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}
