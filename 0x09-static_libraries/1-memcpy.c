#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: size of src to copy
 *
 * Return: dest_ptr (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *dest_ptr = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest_ptr);
}
