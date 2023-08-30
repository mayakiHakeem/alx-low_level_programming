#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all data of list
 * @head: ptr to first list item
 *
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	listint_t *mover;
	int sum = 0;

	mover = head;
	while (mover)
	{
		sum += mover->n;
		mover = mover->next;
	}

	return (sum);
}
