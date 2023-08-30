#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free allocated memory for a list
 * @head: ptr to first element of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	temp = head;
	while (temp)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
