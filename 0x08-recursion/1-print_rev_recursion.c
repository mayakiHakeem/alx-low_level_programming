#include "main.h"

/**
 * _print_rev_recursion - puts in reverse with recursion
 * @s: string to puts to stdout
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}