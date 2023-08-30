#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: ptr to ptr to the first element
 * n: data for the new node
 *
 * Return: address to the new node. NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
