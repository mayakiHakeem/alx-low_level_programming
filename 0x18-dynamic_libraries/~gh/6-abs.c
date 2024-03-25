#include <unistd.h>

/**
 * _abs - write to stdout
 * @n: the number to be checked
 *
 * Description: write the absolute of @n to stdout
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
