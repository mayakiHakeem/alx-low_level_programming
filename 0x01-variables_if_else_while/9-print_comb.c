#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing comma sliced combo
 * Return: 0 (Success)
 */
int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + '0');
		if (numb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb += 1;
	}
	putchar('\n');
	return (0);
}
