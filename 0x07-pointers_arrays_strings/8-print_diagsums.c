#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print 2 diagonal sums
 * @a: array to be passed
 * @size of the a array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l;
	long unsigned int dig1 = 0, dig2 = 0;

	for (i = 0, j = 0; i < size && j < size; i++, j++)
	{
		if (i == j)
		{
			dig1 += a[i][j];
				break;
		}
	}

	for (k = 0, l = size - 1; k < size && l >= 0; k++, l++)
	{
		if (k == l)
		{
			dig2 += a[k][l];
			break;
		}
	}
	printf("%lu, %lu", dig1, dig2);
}
