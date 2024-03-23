#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  free a list
 * @head: address to head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
