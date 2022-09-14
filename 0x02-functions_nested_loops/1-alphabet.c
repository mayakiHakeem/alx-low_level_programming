#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - print the alphabet in lower case to stdout
 *
 * Return: On success (1)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
