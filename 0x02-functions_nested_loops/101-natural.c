#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print multiple of 3 & 5
 *Return 0 (success)
 */
int main(void)
{
	int numb;
	long unsigned int total_nature = 0;

	for (numb = 3; numb < 1024; numb++)
		if ((numb % 3 == 0) || (numb % 5 == 0))
			total_nature += numb;
	printf("%lu\n", total_nature);
	return (0);
}
