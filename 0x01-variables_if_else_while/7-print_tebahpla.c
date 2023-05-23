#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing alphabets in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');
	return (0);
}
