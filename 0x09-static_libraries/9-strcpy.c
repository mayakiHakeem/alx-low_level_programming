#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string to buffer
 * @dest: buffer
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_ptr);
}
