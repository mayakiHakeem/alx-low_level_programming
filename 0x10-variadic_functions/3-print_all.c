#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything supplied
 * @format: list of types of argument
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *str, *separator, ch;

	separator = "";
	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			ch = va_arg(args, int);
			printf("%s%c", separator, ch);
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s(nil)", separator);
			if (str != NULL)
				printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
