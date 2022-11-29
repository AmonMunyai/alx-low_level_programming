#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to first element in a linked listint_t list.
 * @n: integer.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	/* allocate memory */
	node = malloc(sizeof(listint_t));

	/* validate memory */
	if (node == NULL)
	{
		return (NULL);
	}

	/* populate node */
	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
