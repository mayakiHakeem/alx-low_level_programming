#include "main.h"

/**
 * _strncat - concatenates n number of bytes of src string to dest
 * @dest: resulting strings where the other strings will be appended
 * @src: the string to be appended
 *@n: number of bytes of src to be appended to dest
 *
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len;

	index = 0;
	dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
