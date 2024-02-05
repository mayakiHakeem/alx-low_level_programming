#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ptr to concatenated strings. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	unsigned int j, i, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	for (j = 0; s2[j]; j++)
		len++;
	conc_str = malloc(len * sizeof(char) + 1);

	for (i = 0; s1[i]; i++)
		conc_str[i] = s1[i];

	for (j = 0; s2[j]; i++, j++)
		conc_str[i] = s2[j];

	conc_str[i] = '\0';

	return (conc_str);
}
