#include "main.h"

/**
 * flip_bits - counts number of bit to be changed
 * @n: first num
 * @m: second num
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int itr, counter = 0;
	unsigned long int excl = n ^ m;
	unsigned long int curr;

	for (itr = 63; itr >= 0; itr--)
	{
		curr = excl >> itr;
		if (curr & 1)
			counter++;
	}

	return (counter);
}
