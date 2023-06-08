#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: pointer to s (success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; p1++)
	{
		for (p2 = accept; *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
				return (p1);
		}
	}
	return (NULL);
}
