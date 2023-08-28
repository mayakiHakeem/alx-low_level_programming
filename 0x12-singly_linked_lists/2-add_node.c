#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node at the beginning of list
 * @head: pointer to head ptr of the list
 * @str: str of the node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
