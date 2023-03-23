#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
