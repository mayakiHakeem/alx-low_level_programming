#include "lists.h"

/**
 *sum_dlistint - sum all data in list
 * @head: address to head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
