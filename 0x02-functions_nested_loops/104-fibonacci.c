#include <stdio.h>

/**
 * main - print first 100 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int prev = 1, now = 2, final;

	printf("%ld, %ld, ", prev, now);
	for (i = 1; i <= 98; i++)
	{
		final = prev + now;
		printf("%ld", final);
		prev = now;
		now = final;
		if ( i != 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
