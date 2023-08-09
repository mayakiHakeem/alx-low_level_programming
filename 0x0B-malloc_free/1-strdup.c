#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a copy
 * @str: string to be duplicated
 *
 * Return: ptr to the duplicated copy
 * NULL if memory isn't allocated
 */
char *_strdup(char *str)
{
	int i, j, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	dup = malloc((len * sizeof(char)) + 1);

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		dup[j] = str[j];
	dup[j] = '\0';

	return (dup);
}
