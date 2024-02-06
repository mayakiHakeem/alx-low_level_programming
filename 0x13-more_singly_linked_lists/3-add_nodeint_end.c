#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: ptr to ptr to the first element
 * @n: data to be entered in new node
 *
 * Return: address to the new node. NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;

		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (new);
}
