#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multiply integer arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
