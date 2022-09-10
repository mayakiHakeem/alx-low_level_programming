#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar(10);

	return (0);
}
