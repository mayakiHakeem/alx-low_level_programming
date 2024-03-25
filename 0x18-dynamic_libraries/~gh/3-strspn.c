#include "main.h"
#include <stdio.h>
/**
 * _strspn - get the length of prefix string
 * @s: string to search
 * @accept: prefix string
 *
 * Return: number of bytes of @accept in @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				len++;
				break;
			}
		}
	}
	return (len);
}
