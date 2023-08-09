#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: str 1
 * @s1: str2 to tail s1
 *
 * Return: ptr to the concatenated string
 * retur NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, k, len = 0;

        for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (j = 0; s2[j] != '\0'; j++)
		len++;

	concat = malloc((len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		concat[k] = s1[k];

	for (j = 0; s2[j] != '\0'; j++, k++)
		concat[k] = s2[j];

	concat[k] = '\0';

	return (concat);
}
