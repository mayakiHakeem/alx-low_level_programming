#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point to program
 * Description: performs simple arithmetic operations.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *symbol;
	int (*operator)(int a, int b);
	int operand1, operand2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	symbol = argv[2];

	if (!operator || strlen(symbol) != 1)
	{
		printf("Error\n");
		return (99);
	}

	if ((*symbol == '/' || *symbol == '%') && operand2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operator(operand1, operand2));

	return (0);
}
