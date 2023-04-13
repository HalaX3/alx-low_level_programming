#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_error - handles errors for main
 */

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * isDigit - checks if a string has a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int isDigit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}

	return (1);
}

/**
 * str_length - returns length of a string
 * @str: string to be evaluated
 *
 * Return: length of the string
 */

int str_length(char *str)
{
	int index = 0;

	while (str[index] != '\0')
		index++;

	return (index);
}

/**
 * main - multiplies two positive numbers together
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, index, carry, d1, d2, *result, x = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !isDigit(str1) || !isDigit(str2))
		print_error();
	length1 = str_length(str1);
	length2 = str_length(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (index = 0; index <= length1 + length2; index++)
		result[index] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		d1 = str1[length1] - '0';
		carry = 0;
		for (length2 = str_length(str2) - 1; length2 >= 0; length2--)
		{
			d2 = str2[length2] - '0';
			carry += result[length1 + length2 + 1] + (d1 * d2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (index = 0; index < length - 1; index++)
	{
		if (result[index])
			x = 1;
		if (x)
			_putchar(result[index] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
