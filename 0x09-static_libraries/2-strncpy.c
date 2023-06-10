#include "main.h"

/**
 * _strncpy - copy a size of string to buffer
 * @dest: buffer to copy into
 * @src: string to copy
 * @n: size of src to copy
 *
 * Return: pointer to dest (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *dest_ptr = dest;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest_ptr);
}
