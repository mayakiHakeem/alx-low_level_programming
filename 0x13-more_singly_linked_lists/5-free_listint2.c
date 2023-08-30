#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: ptr to ptr to the first item
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;
	while (temp)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
	*head = NULL;
}
