#include "main.h"

/**
 * binary_to_uint - converts binary no. to unsigned int
 * @b: string of binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int itr;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (itr = 0; b[itr]; itr++)
	{
		if (b[itr] < '0' || b[itr] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[itr] - '0');
	}

	return (decimal_val);
}
