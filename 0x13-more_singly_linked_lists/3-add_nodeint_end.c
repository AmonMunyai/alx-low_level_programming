#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in a linked listint_t list.
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	/* allocate memory */
	node = malloc(sizeof(listint_t));

	/* validate memory */
	if (node == NULL)
	{
		return (NULL);
	}

	/* populate node */
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node; /* set node as first element */
	}
	else
	{
		temp = *head;
		while (temp->next != NULL) /* move to last node in element */
		{
			temp = temp->next;
		}
		temp->next = node;
	}

	return (node);
}
