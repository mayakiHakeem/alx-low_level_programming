#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min coins to change for amount
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success, 1 if error
 */
int main(int argc __attribute__((unused)), char *argv[])
{
  int mod, cents, count = 0;

  if (argc != 2)
  {
    printf("Error\n");
    return(1);
  }

  cents = atoi(argv[1]);

  count += (cents / 25);
  mod = cents % 25;

  cents = mod;
  count += (cents / 10);
  mod = cents % 10;

  cents = mod;
  count += (cents / 5);
  mod = cents % 5;

  cents = mod;
  count += (cents / 2);
  mod = cents % 2;

  cents = mod;
  count += (cents / 1);

  printf("%d\n", count);
  return(0);
}
