#include "main.h"

/**
 * factorial - calculates the factorial of a num
 * @n: the number whose factorial is calculated
 *
 * Return: the factorial of the number, or -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n *= factorial(n - 1));
}
