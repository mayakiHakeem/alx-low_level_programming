#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at index
 * @h: address to the head pointing to node
 * @idx: index to insert node at
 * @n: data to insert at node
 *
 * Return: address to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i, count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	count = node_count(h);
	if (idx > count)
	{
		free(new);
		return (NULL);
	}
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		if (temp)
			(temp)->prev = new;
		*h = new;
	}
	else
	{
		for (i = 0; i < idx -1 && temp; i++)
			temp = temp->next;
		if (!temp)
		{
			free(new);
			return (NULL);
		}
		new->next = temp->next;
		if (temp->next)
			temp->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}

/**
 * node_count - count number of nodes in list
 * @h: pointer to the address of head of list
 *
 * Return: count
 */
unsigned int node_count(dlistint_t **h)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = *h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
