#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: ptr param for array to reverse
 * @n: int param for size of array
 *
 * Return: reversed array (success)
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *p1, *p2;

	p1 = a;
	p2 = a + (n - 1);

	while (p1 < p2)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
}
