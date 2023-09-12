#include <stdlib.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int i;

	/*is n zero?*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = sizeof(unsigned int) * 8 - 1;

	while ((n >> i) == 0)
	{
		i--;
	}

	while (i >= 0)
	{
		_putchar(((n >> i) & 1) + '0');
		i--;
	}
}
