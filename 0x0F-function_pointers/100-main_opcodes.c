#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b, itr;
	char *arrptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arrptr = (char *)main;

	for (itr = 0; itr < b; itr++)
	{
		if (itr == b - 1)
		{
			printf("%02hhx\n", arrptr[itr]);
			break;
		}
		printf("%02hhx ", arrptr[itr]);
	}
	return (0);
}
