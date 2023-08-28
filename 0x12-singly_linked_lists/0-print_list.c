#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of list
 * @h: ptr to head of list
 *
 * Return: numbers of element printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		if (ptr->str)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		count++;
		ptr = ptr->next;
	}
	return (count);
}
