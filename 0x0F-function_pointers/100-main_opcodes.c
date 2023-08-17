#include <stdlib.h>
#include <stdio.h>

void print_opcode(unsigned char *, int);

/**
 * main - prints the opcodes of the main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned char *main_ptr;
	int i, num_bytes;

	/*check to ensure correct number of arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/*convert to int*/
	num_bytes = atoi(argv[1]);

	/*check to confirm number of bytes entered is valid*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/*get address of first byte of main*/
	main_ptr = (unsigned char *)main;

	/*print specified number of bytes startin from main*/
	print_opcode(main_ptr, num_bytes);

	return (0);
}

/**
 *print_opcode - print opcodes
 * @start: starting address
 * @num_bytes: number of byte to print
 *
 * Return: void
 */
void print_opcode(unsigned char *start, int num_bytes)
{
	int i;

	/*prnt opcodes*/
	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
			printf(" ");
		if (i < num_bytes)
			printf("%02hhx", start[i]);
	}
	printf("\n");
}
