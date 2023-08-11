#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * Description: allocates memory for an array of nmemb elements of\
 size bytes each
 * @nmemb: array element
 * @size: size of each array
 *
 * Return: ptr to memory (success)
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *byte_ptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = ptr;
	for (i = 0; i < (size * nmemb); i++)
		byte_ptr[i] = 0;
	return (ptr);
}
