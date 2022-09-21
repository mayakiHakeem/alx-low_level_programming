#include "main.h"

/**
 * print_rev - print string in reverse form
 * @s: pointer argument of string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
