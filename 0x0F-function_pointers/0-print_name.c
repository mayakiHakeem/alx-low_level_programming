#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: param for name to be printed
 * @f: function pointer to print format
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
