#include <stdio.h>
#include <stdlib.h>

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
	unsigned int j, i, len, len1 = 0, len2 = 0;

	if (s1 == NULL || s1 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	len = len1 + len2;
	conc_str = malloc(len * sizeof(char) + 1);
	if (!conc_str)
		return (NULL);

	for (i = 0; i < len1; i++)
		conc_str[i] = s1[i];
	for (j = 0; j < len2; i++, j++)
		conc_str[i] = s2[j];
	conc_str[i] = '\0';

	return (conc_str);
}
