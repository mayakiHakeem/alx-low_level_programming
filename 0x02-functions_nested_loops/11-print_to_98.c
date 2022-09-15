#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers
 * description: print all natural numbers from given number to 98
 * @n: given parameter
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);

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
