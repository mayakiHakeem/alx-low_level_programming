#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print data of list
 * @h: head of a list
 *
 * Return: count.
 */
size_t print_dlistint(const dlistint_t *h)
{
    	size_t count = 0;

    	while (h)
      	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
