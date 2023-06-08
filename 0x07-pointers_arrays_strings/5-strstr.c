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
	for (; *needle != '\0'; haystack++)
	{
		if (*needle == *haystack)
		{
			/*char *need2 = needle;*/
			char *hay2 = haystack;

			while (*needle != '\0' && *needle == *haystack)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
				return (hay2);
		}
	}
	return (NULL);
}
