#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to first element in list
 * @str: string to add to list
 * Return: the address of the new element, NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int str_len;
	char *str_dup;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		return (NULL);
	}

	str_len = 0;
	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	node->str = str_dup;
	node->len = str_len;
	node->next = *head;

	*head = node;

	return (node);
}
