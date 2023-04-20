#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints given strings
 * @separator: The string to be printed between every strings
 * @n: Number of strings passed to the function
 * @...: A variable number of strings to be printed
 * Description: If separator is equal to NULL so it is not printed
 * If one of the strings is NULL so (nil) is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *strptr;
	unsigned int itr;

	va_start(s, n);

	for (itr = 0; itr < n; itr++)
	{
		strptr = va_arg(s, char *);

		if (strptr == NULL)
			printf("(nil)");
		else
			printf("%s", strptr);

		if (itr != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
