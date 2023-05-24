#include "main.h"

/**
 * jack_bauer - write to stdout
 *
 * Description: write all the day minutes
 * Return: void
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		int hour_tens = hr / 10;
		int hour_unit = hr % 10;

		min = 0;
		while (min < 60)
		{
			int min_tens = min / 10;
			int min_unit = min % 10;

			_putchar(hour_tens + '0');
			_putchar(hour_unit + '0');
			_putchar(':');
			_putchar(min_tens + '0');
			_putchar(min_unit + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
