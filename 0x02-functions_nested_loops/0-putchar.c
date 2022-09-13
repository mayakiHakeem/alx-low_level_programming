#include "main.h"

/**
 * main - Entry Point
 * Description: printing "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar(10);
	return (0);
}
