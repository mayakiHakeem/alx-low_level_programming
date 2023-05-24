#include "main.h"

/**
 * print_alphabet_x10 - write to sdtout
 *
 * Description: Write alphabets 10x to stdout
 * Return: void
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
			c += 1;
		}
		_putchar('\n');
		i += 1;
	}
}
