#include "main.h"

/**
 * puts_half - write the last half of string
 * @str: str to write
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, i, j, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	n = (len - 1) / 2;
	for (j = n + 1; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
