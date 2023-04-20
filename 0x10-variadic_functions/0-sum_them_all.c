#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Finds the sum of all paramters
 * @n: The number of paramters passed
 * @...: Number of paramters to calculate the sum of
 * Return: If n == 0 - 0. Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int itr, sum = 0;

	va_start(ptr, n);

	for (itr = 0; itr < n; itr++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
