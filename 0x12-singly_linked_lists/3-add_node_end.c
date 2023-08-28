#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of list
 * @head: ptr to head ptr
 * @str: string part of node
 *
 * Return: address of new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *current;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp->str);
		return (NULL);
	}

	temp->len = strlen(temp->str);

	if (*head == NULL)
		*head = temp;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = temp;
	}
	temp->next = NULL;

	return (temp);
}
