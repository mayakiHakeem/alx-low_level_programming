#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate strings
 * @s1: string to concatenate to
 * @s2: string to concatenate with
 * @n: size of @s2 to concatenate @s1 with
 * Description: concatenate first @n bytes of @s2 to @s1
 *
 * Return: ptr to concatenated strings
 * NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *ptr_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{
	}

	if (n >= len_s2)
		n = len_s2;

	ptr_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr_str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		ptr_str[i] = s2[j];
	ptr_str[i] = '\0';

	return (ptr_str);
}
