#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, j, first, second;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				second = i % 10;
				_putchar(second + '0');
			}
			else
			{
				first = i / 10;
				second = i % 10;
				_putchar(first + '0');
				_putchar(second + '0');
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				second = j % 10;
				_putchar(second + '0');
			}
			else
			{
				first = j / 10;
				second = j % 10;
				_putchar(first + '0');
				_putchar(second + '0');
			}
			_putchar('\n');
		}
	}
}
