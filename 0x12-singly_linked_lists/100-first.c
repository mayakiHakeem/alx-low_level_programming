#include <stdio.h>
void print_msg(void) __attribute__((constructor));
/**
 * print_msg - prints message before main routine executed
 *
 * Return: void
 */
void print_msg(void)
{
	printf("You're beat! and yet, you must allow,
\nI bore my house upon my back!\n");
}
