#include "main.h"

/**
 * swap_int - swap integer argument a and b
 * @a: integral argument
 * @b: integral argument
 *
 * *Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
