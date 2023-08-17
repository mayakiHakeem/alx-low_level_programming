#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: printed etween strings
 * @n: number of params of the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list asp;

	va_start(asp, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(asp, char *);

		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);

		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(asp);
}
