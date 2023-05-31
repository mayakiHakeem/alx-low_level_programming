#include <stdio.h>

/**
 * print_array - print array of int
 * @a: array
 * @n: size of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n <= 0)
		printf("\n");

	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
