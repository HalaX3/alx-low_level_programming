#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Finds the sum of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Sum of a & b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Finds the difference of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Finds the product of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Finds the division of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Division of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Remainder of a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
