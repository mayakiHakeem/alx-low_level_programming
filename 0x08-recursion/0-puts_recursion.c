#include "main.h"

/**
 * _puts_recursion - puts a string followed by a new line.
 * Description: put a string parameter followed by a new line
 *similar to the stdlib puts
 * @s: string param to put
 *
 * Return (0);
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
