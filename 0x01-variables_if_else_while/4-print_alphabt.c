#include <stdio.h>
/**
 * main - Entry point
 *
 * Description
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
