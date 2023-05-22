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
	       	c += 1;
	}
	putchar('\n');
	return (0);
}
