#include <stdio.h>

/**
 * main - prints cl argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
