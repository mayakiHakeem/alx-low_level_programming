#include "main.h"
#include <stdio.h>

int main()
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;


	largest = largest_number(a, b, c);

	printf("%d is the largest number", largest);

	return (0);
}
