#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
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
		asp == NULL ? printf("(nil)") : printf("%s", va_arg(asp, char *));
		if (separator != NULL && (i < (n-1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(asp);
}
