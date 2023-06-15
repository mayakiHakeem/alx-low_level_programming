#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to add to
 * @s2: string to concatenate
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr_s;
	int i, j, k, len_s1 = 0, len_s2 = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;
	len = len_s1 + len_s2 + 1;
	ptr_s = malloc(sizeof(char) * len);
	if (ptr_s == NULL)
		return (NULL);
	for (k = 0, i = 0; k < len && s1[i] != '\0'; k++, i++)
		ptr_s[k] = s1[i];
	for (k = len_s1, j = 0; k < len && s2[j] != '\0'; k++, j++)
		ptr_s[k] = s2[j];
	*(ptr_s + len + 1) = '\0';
	return (ptr_s);
}
