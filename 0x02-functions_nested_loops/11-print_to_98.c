#include <stdio.h>

/**
 * print_to_98 - write numbers to stdout
 * @n: number to start printing from
 *
 * Description: write from number to 98
 * Return: void
 */
void print_to_98(int n)
{

	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}

	else
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}
