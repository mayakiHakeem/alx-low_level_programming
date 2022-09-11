#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char d;

	d = 'a';
	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
