#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: starting integer n
 *
 * description: print all natural numbers from n to 98
 * 
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;

		}
	}

	else if
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");

}
