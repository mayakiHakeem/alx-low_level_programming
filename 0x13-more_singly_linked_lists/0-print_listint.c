#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print items in a list
 * @h: ptr to the first element
 *
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int len = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}
