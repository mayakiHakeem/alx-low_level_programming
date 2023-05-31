#include <unistd.h>

/**
 * swap_int - swap values of two params
 * @a: value to swap
 * @b: value to swap with
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
