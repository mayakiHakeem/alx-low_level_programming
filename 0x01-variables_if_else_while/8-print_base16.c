#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing the hex values
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d += 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
