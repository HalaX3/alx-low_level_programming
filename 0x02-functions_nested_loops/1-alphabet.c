#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *			all lowercase alphabets
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
