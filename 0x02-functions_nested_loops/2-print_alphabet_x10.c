#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x in 10 lines
 *
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;
	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
