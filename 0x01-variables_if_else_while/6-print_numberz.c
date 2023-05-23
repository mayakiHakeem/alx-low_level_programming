#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + '0');
		numb += 1;
	}
	putchar('\n');
	return (0);
}
