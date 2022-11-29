#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to first element in a listint_t linked list.
 * Return: the sum of all the data (n) of a listint_t
 * linked list, 0 if list is empty.
*/

int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int sum;

	node = head;
	sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
