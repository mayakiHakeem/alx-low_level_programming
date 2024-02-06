#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - get the length of a list
 * @h: ptr to first element in the list
 *
 * Return: len for length of list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
