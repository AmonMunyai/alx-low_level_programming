#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to first element in a listint_t linked list
 * Return: returns the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
