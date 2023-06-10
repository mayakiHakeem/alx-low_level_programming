#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = *(unsigned char *)s1 - *(unsigned char *)s2;

	return (result);
}
