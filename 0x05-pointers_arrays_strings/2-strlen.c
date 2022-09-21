#include "main.h"

/**
 * _strlen - take the length str
 * @s: char pointer argument
 *
 * Return: intgral length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
