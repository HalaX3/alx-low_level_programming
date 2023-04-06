#include "main.h"

int tmp_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root.
 *
 * Return: The square root result,
 * or -1 if the number does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (tmp_sqrt_recursion(n, 0));
}

/**
 * tmp_sqrt_recursion - finds the natural square root of a number.
 * @n: The number to calculate the square root.
 * @x: The iterator.
 *
 * Return: The square root result.
 */

int tmp_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (tmp_sqrt_recursion(n, x + 1));
}
