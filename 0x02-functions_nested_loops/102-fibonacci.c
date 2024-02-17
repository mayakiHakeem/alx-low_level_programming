#include <stdio.h>

/**
 * main - print first 50 fibonaci numbers
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long int prev1 = 1, prev2 = 2, fib;
	int i;

	printf("%ld, %ld, ", prev1, prev2);

	for (i = 1; i <= 48; i++)
	{
		fib = prev1 + prev2;
		printf("%ld", fib);
		prev1 = prev2;
		prev2 = fib;

		if (i != 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
