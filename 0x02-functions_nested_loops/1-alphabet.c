#include "main.h"

/**
 * print_alphabet - write the alphabet to stdout
 *
 * Description: alphabet printing function
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c += 1;
	}
	_putchar('\n');
}
