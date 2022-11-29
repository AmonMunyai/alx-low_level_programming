#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first element to a listint_t linked list.
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (*head == NULL)
	{
		return (NULL);
	}

	prev = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
