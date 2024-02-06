#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head of node
 * @head: ptr to ptr to the head item
 *
 * Return: data at head node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (!*head)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}
