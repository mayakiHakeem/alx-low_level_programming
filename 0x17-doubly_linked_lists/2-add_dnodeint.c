#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node with int data
 * @head: address to head of the pointer
 * @n: data to add to node
 *
 * Return: new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
