#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name using pointer to function
 * @name: string that has contains the name
 * @f: pointer to function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
