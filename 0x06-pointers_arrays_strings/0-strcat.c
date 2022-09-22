#include "main.h"

/**
 * _strcat - concatnate two strings
 * @dest: pointer to rsulting strings to be concatenated
 * @src: strings to be concatenated
 * Return: strings
 */

char *_strcat(char *dest, char *src)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index);
	return (dest);
}
