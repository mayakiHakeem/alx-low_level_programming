#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @src: string to append to another string
 * @n: size of src to append
 * @dest: string to append to
 * Return: ptr to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *dest_ptr = dest;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_ptr);
}
