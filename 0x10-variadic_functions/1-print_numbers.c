#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints all  numbers given
 * @separator: The string to be printed between the numbers.
 * @n: Number of int values passed to the function.
 * @...: Number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int itr;

	va_start(numbers, n);
	for (itr = 0; itr < n; itr++)
	{
		printf("%d", va_arg(numbers, int));
		if (itr != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
