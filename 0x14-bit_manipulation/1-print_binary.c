#include "main.h"

/**
 * print_binary - prints binary equ of a dec no
 * @n: no to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int itr, counter = 0;
	unsigned long int curr;

	for (itr = 63; itr >= 0; itr--)
	{
		curr = n >> itr;

		if (curr & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
