#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		else
		{
		}
	}
	putchar(10);

	return (0);
}
