#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that Prints the result of a simple operations
 * @argc: The number of arguments that is supplied to the program
 * @argv: An array of pointers
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	ptr = argv[2];
	n2 = atoi(argv[3]);
	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ptr == '/' && n2 == 0) || (*ptr == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ptr)(n1, n2));
	return (0);
}
