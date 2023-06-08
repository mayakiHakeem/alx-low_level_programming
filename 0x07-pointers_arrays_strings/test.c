#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c = "First, solve the problem. Then, write the code.";
	char *f = "School";
	char *s = "solve";
	char *t = "";
	char *test;
	char *test1;
	char *test2;

	test = _strstr(c, f);
	test1 = _strstr(c, s);
	test2 = _strstr(c, t);
	printf("%s\n %s\n %s\n", test,test1,test2);
	return (0);
}
