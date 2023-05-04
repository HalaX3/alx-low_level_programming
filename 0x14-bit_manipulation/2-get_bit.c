#include "main.h"

/**
 * get_bit - find the value of bit at index in decimal no
 * @n: number to be searched
 * @index: bit index
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
