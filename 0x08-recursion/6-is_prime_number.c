#include "main.h"

int check_prime(int n, int x);

/**
 * is_prime_number - checks if number is prime
 * @n: the number to checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime or not
 * @n: the number to checked
 * @x: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int x)
{
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);
	return (check_prime(n, x + 1));
}
