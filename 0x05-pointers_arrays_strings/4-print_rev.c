#include "main.h"

/**
 * print_rev - reverse string to stdout
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, sum;

	sum = 0;
	for (j = 0; s[j] != '\0'; j++)
		sum++;

	for (i = sum - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
