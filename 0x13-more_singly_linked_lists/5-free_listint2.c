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
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
