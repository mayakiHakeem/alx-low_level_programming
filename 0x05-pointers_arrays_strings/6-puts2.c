#include "main.h"

/**
 * puts2 - print every othr character of a string
 * @str: pointer to a string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
