#include <stdlib.h>
#include "lists.h"

int list_length(listint_t *head);
/**
 * get_nodeint_at_index - get node at index
 * @head: ptr to first element of list
 * @index: index of node
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, len = list_len(head);

	if (index >= len)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}

/**
 * list_len - get length of list
 * @head: ptr to first list item
 *
 * Return: length
 */
int list_length(listint_t *head)
{
	listint_t *mover;
	int len = 0;

	mover = head;
	while (mover)
	{
		len++;
		mover = mover->next;
	}
	return (len);
}
