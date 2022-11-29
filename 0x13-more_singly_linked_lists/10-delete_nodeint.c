#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to first element in listint_t linked list.
 * @index: is the index of the node that should
 * be deleted, index starts at 0.
 * Return: 1 (success), -1 (failer)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i;

	node = *head;

	if (index == 0 && node != NULL)
	{
		node = node->next;
		free(*head);
		*head = node;

		return (1);
	}
	else
	{
		for (i = 0; node != NULL; i++)
		{
			if (i == (index - 1))
			{
				/* delete node.. */
				temp = node->next;
				node->next = temp->next;
				free(temp);

				return (1);
			}
			node = node->next;
		}
	}

	return (-1);
}
