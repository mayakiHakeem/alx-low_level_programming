#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte to fill
 * @n: size(bytes) of memory space of s to fill
 *
 * Return: ptr to s (succss)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *s_ptr = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s_ptr);
}
