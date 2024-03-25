#include "main.h"

/**
 * _strlen - length of string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int sum, i;

	i = sum = 0;
	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	return (sum);
}
