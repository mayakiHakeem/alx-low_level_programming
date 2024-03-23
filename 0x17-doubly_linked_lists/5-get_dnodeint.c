#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get data at index node
 * @head: address to head of list
 * @index: the node to get
 *
 * Return: data at node | NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i, count = 0;

	temp = head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (index >= count)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
