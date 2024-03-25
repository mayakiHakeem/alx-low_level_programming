#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to address of the head of list
 * @index: index of node to delete
 *
 * Return: 1 (success) | -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, count = node_count(head);
	dlistint_t *temp = *head;

	if (index >= count)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
		temp = temp->next;

	if (!temp)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

/**
 * node_count - count number of nodes
 * @head: pointer to address of the head of list
 *
 * Return: count
 */
unsigned int node_count(dlistint_t **head)
{
	dlistint_t *temp;
	int count = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
