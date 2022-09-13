#include "main.h"
/**
 * main - Entry Point
 * Description: printing "_putchar"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char ch[] = "_putchar\n";
	i = 0;
	while (ch[i] != '\0');
	{
		char c = ch[i];

		_putchar(i);
		i += 1;
	}
	return (0);
}
