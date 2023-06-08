#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring
 * @haystack: where  to locate
 * @needle: string to locate
 *
 * Return: ptr to begining of substring or  NULLi f not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	for (; *needle != '\0'; haystack++)
	{
		if (*needle == *haystack)
		{
			char *need2 = needle;
			char *hay2 = haystack;

			while (*need2 != '\0' && *need2 == *hay2)
			{
				hay2++;
				need2++;
			}
			if (*need2 == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
