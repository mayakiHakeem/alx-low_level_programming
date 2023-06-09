#include "main.h"

/**
 * _puts_recursion - puts function implemented with recursion
 * @s: string to be puts to stdout
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
