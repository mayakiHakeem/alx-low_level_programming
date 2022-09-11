#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 16)
	{
		putchar('\0' + num);
		num++;
	}
	putchar(10);
	return (0);
}
