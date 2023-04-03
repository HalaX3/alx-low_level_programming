#include "main.h"

/**
 * _memset - fill a block of memory with a given specified value
 * @s: starting address of memory
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new specified value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
