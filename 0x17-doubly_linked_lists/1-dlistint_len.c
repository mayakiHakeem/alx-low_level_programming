#include "lists.h"

/**
 * dlistint_len - count nodes in a list
 * @h: address to head of list
 *
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
