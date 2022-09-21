#include "main.h"

/**
 * _puts - print string to the stdout
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str[i + '0']; i++)
		_putchar(i);
}
