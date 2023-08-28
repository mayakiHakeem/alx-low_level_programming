#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free memory for the list
 * @head: ptr to first node of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *current;

	current = head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
