#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: string to append to a string
 * @dest: string to append to
 *
 * Return: dest_ptr (success)
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *dest_ptr = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}
