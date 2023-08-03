#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * Description: returns the length of string using recursion
 * @s: string to b counted
 *
 * Return: Number of characters in @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
