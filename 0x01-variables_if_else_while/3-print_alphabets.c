#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print both lower and upper
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d += 1;
	}
	putchar('\n');
	return (0);
}
