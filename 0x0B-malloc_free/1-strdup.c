#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string.
 * @str: string
 *
 * Return: ptr to duplicated str. NULL on failure.
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *ptr_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	ptr_str = malloc(len * sizeof(*str) + 1);
	if (!ptr_str)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr_str[i] = str[i];
	ptr_str[i] = '\0';

	return (ptr_str);
}
