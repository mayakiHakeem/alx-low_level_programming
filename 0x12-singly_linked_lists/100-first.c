#include <stdio.h>
void __attribute__((constructor)) first_msg(void);
/**
 * print_msg - prints message before main routine executed
 *
 * Return: void
 */
void first_msg(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
