#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: ptr to memory prev allocated
 * @old_size: size of ptr space in bytes
 * @new_size: size of new memory block
 *
 * Return: ptr to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *ptr_byte, *old_ptr;
	unsigned int i;
	void *ptr_block;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr_block = malloc(new_size);
	if (ptr_block == NULL)
		return (NULL);

	ptr_byte = ptr_block;
	old_ptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		ptr_byte[i] = old_ptr[i];

	free(ptr);

	return (ptr_block);
}
