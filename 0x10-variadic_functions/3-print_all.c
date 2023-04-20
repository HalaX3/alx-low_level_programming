#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int itr = 0;
	char *strptr, *s = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[itr])
		{
			switch (format[itr])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 's':
					strptr = va_arg(l, char *);
					if (!strptr)
						strptr = "(nil)";
					printf("%s%s", s, strptr);
					break;
				default:
					itr++;
					continue;
			}
			s = ", ";
			itr++;
		}
	}
	printf("\n");
	va_end(l);
}
