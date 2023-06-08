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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
