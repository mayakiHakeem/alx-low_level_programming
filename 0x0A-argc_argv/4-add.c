#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: add digit arguments
 * Return: Always 0 (Success) 1 if non-digit
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *ptr_check;
			long int num = strtol(argv[i], &ptr_check, 10);

			if (*ptr_check != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
