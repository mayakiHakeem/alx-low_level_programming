#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing the alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c += 1;
	}
	return (0);
}
