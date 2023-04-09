#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_number - checks if a string contains only digits
 * @s: string to checked
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */

int check_number(char *s)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(s))
	{
		if (!isdigit(s[counter]))
			return (0);

		counter++;
	}

	return (1);
}

/**
 * main - prints the sum of all arguments that are of int type
 * @argc: argument size
 * @argv: array of args
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int counter;
	int string_to_int;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_number(argv[counter]))
		{
			string_to_int = atoi(argv[counter]);
			sum += string_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		counter++;
	}

	printf("%d\n", sum);

	return (0);
}
