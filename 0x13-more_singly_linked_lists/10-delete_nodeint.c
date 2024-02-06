#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: ptr to ptr to the list first item
 * @index: index position to delete
 *
 * Return: 1 (success). -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *temp;

	if (!head || !*head) /* Check if head or list is NULL*/
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (i = 0; prev != NULL && i < index - 1; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
