#include <stdlib.h>
#include "lists.h"

/**
 * list_len - get the num of elements of list
 * @h: head of list
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	int len = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
