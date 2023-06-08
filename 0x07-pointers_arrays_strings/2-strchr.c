#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a str
 * @s: string to be checked
 * @c: character to locate
 *
 * Return: first occurrence if found
 *return NULL if not
 */
char *_strchr(char *s, char c)
{
	int i, len = 0, j;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = 0; j <= len; j++)
	{
		if (s[j] == c)
			return (s);
		s++;
	}
	return (NULL);
}
