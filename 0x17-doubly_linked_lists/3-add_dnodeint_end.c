#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add int data at the end of node
 * @head: point to head node of list
 * @n: int data to add
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new; /*If the list is empty, new becomes head*/
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
