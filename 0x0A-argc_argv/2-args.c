#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int itr;

	for (itr = 0; itr < argc; itr++)
		printf("%s\n", argv[itr]);

	return (0);
}
