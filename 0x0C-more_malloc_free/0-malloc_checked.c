#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: ptr to the memory (success)
 * NULL if it fail
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
		return ((void *)98);
	return (mem_ptr);
}
