#include "main.h"

/**
 * _strcpy -  copy string
 * @dest: the string to be copy to
 * @src: the string to be copied
 *
 * Return: string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
